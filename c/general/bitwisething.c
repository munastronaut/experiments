#include <stdio.h>

int main(void) {
    unsigned int x = 0x87654321;
    puts("Answers:");
    printf("  A. %#010x\n", x & 0xFF);
    printf("  B. %#010x\n", x ^ (~0xFF));
    printf("  C. %#010x\n", (x & ~0xFF) | 0xFF);
}
