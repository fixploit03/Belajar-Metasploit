#include <windows.h>
#include <stdio.h>

void CauseMemoryCorruption() {
    // Mengakses memori yang terproteksi dan menyebabkan BSOD
    char *mem = (char *)0xFFFFFFFF;  // Mengakses alamat memori kernel yang dilindungi
    *mem = 'A';  // Menulis ke memori yang dilindungi, memicu BSOD
}

int main() {
    printf("Memicu BSOD dengan Memory Corruption\n");
    
    // Memicu BSOD melalui kerusakan memori
    CauseMemoryCorruption();
    
    return 0;
}
