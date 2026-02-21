#include <stdio.h>

int main(void) {
    char c = getchar() != EOF;
    printf("%d", (int)c);
}
