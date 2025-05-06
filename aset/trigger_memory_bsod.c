#include <windows.h>
#include <stdio.h>
#include <ntstatus.h>

typedef NTSTATUS (NTAPI *pNtRaiseHardError)(NTSTATUS Status, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask, PULONG_PTR Parameters, ULONG ResponseOption, PULONG Response);

void CauseBSOD() {
    // Menginisialisasi fungsi NtRaiseHardError dari kernel
    pNtRaiseHardError NtRaiseHardErrorFunc = (pNtRaiseHardError)GetProcAddress(GetModuleHandle(L"ntdll.dll"), "NtRaiseHardError");

    if (NtRaiseHardErrorFunc != NULL) {
        ULONG_PTR error_params[3] = { 0 };
        // Memicu BSOD dengan memanggil NtRaiseHardError dengan status error tertentu
        NtRaiseHardErrorFunc(0xC00002B4, 3, 0, error_params, OptionShutdownSystem, NULL);
    }
}

int main() {
    printf("Memicu BSOD dengan Kernel\n");
    
    // Memicu BSOD
    CauseBSOD();
    
    return 0;
}
