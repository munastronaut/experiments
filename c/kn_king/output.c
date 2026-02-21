#include <stdio.h>

int main() {
    int i, j, k;

    i = 7; j = 8;
    i *= j + 1;
    printf("%d, %d\n", i, j);         // 63, 8

    i = j = k = 1;
    i += j += k;
    printf("%d, %d, %d\n", i, j, k);  // 3, 2, 1

    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d, %d, %d\n", i, j, k);  // 0, 0, 0

    i = 6;
    j = i += i;
    printf("%d, %d\n", i, j);         // 12, 12

    i = 5;
    j = (i -= 2) + 1;
    printf("%d, %d\n", i, j);         // 3, 4

    i = 7;
    j = 6 + (i = 2.5);
    printf("%d, %d\n", i, j);         // 2, 8

    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d, %d\n", i, j);         // 6, 9
}
