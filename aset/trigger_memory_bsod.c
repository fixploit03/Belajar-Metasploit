#include <windows.h>
#include <stdio.h>

// x86_64-w64-mingw32-gcc trigger_memory_bsod.c -o trigger_memory_bsod.exe

void CauseMemoryAccessViolation() {
    // Menggunakan pointer yang tidak valid untuk memicu kesalahan akses memori
    int *ptr = NULL;
    *ptr = 42;  // Dereference NULL pointer untuk menyebabkan crash
}

int main() {
    // Memicu BSOD dengan kesalahan akses memori
    CauseMemoryAccessViolation();
    return 0;
}
