#include <stdio.h>

int main(int argc, char *argv[]) {
    while (*argv) {
        char *p = *argv++;
        while (*p)
            printf("%c\n", *p++);
    }
    return 0;
}
