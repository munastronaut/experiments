#define _POSIX_C_SOURCE 199309L
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <time.h>
#include <unistd.h>
#define ARRAY_LEN(arr) (sizeof(arr) / sizeof((arr)[0]))

static int const colors[] = {196, 202, 208, 214, 220, 226, 190, 154, 118, 82,
                             46,  47,  48,  49,  50,  51,  45,  39,  33,  27,
                             21,  57,  93,  129, 165, 201, 200, 199, 198, 197};

int main() {
    int spaces = 0, dir = 1;

    struct timespec ts;
    ts.tv_sec = 0;
    ts.tv_nsec = 33333333L;

    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    size_t color_count = ARRAY_LEN(colors);
    size_t color_idx = 0;

    while (1) {
        printf("%*s\x1b[1;38;5;%dm\x46\x75\x63\x6b\x20\x59\x6f\x75\x1b[0m\n",
               spaces, "", colors[color_idx]);

        color_idx = (color_idx + 1) % color_count;
        spaces += dir;
        if (spaces >= w.ws_col - 8 || spaces <= 0)
            dir *= -1;

        nanosleep(&ts, NULL);
    }

    return 0;
}
