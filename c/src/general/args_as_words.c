#include <stdio.h>

int main([[maybe_unused]] int argc, char *argv[]) {
    while (*argv)
        puts(*argv++);
}
