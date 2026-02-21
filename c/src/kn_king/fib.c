#include <gmp.h>
#include <profileapi.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return EXIT_FAILURE;
    }
    unsigned long int num = strtoul(argv[1], NULL, 10);

    mpz_t result;
    mpz_init(result);

    LARGE_INTEGER frequency, start, end;

    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&start);

    mpz_fib_ui(result, num - 1);

    QueryPerformanceCounter(&end);

    double time = (double) (end.QuadPart - start.QuadPart) * 1000.0 / frequency.QuadPart;

    gmp_printf("%Zd\n", result);
    printf("Calculation time: %g ms\n", time);

    mpz_clear(result);

    return EXIT_SUCCESS;
}
