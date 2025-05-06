#include <windows.h>
#include <stdio.h>

void CauseMemoryAccessViolationWithGuard() {
    // Mengalokasikan halaman memori dengan guard
    SYSTEM_INFO si;
    GetSystemInfo(&si);
    size_t pageSize = si.dwPageSize;

    void* mem = VirtualAlloc(NULL, pageSize, MEM_COMMIT, PAGE_GUARD);

    if (mem == NULL) {
        printf("VirtualAlloc failed\n");
        return;
    }

    // Coba akses memori yang dilindungi oleh guard, yang akan menyebabkan BSOD
    *((char *)mem) = 'A'; // Ini akan menyebabkan BSOD karena halaman ini dilindungi
}

int main() {
    // Memicu BSOD dengan memori terproteksi
    CauseMemoryAccessViolationWithGuard();
    return 0;
}
