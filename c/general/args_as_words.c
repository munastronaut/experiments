#!/usr/bin/tcc -run
#include <stdio.h>

int main(int argc, char *argv[]) {
    while (*argv)
        puts(*argv++);
}
