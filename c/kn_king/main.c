#include <stdlib.h>
#include <stdio.h>
#include <gmp.h>
#include <windows.h>

int main() {
    mpz_t result, mod;
    unsigned long int base = 2, power = 2097152;
    unsigned long int last_digits;

    LARGE_INTEGER frequency, start, end;

    mpz_inits(result, mod, NULL);
    mpz_set_ui(mod, 1000000ul);

    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&start);

    mpz_ui_pow_ui(result, base, power);
    mpz_mod(result, result, mod);

    QueryPerformanceCounter(&end);

    last_digits = mpz_get_ui(result);

    double time = (double) (end.QuadPart - start.QuadPart) * 1000.0 / frequency.QuadPart;

    printf("Last 6 digits of %lu^%lu: ...%06lu\n", base, power, last_digits);
    printf("Calculation time: %g ms\n", time);

    mpz_clear(result);
    mpz_clear(mod);

    return EXIT_SUCCESS;
}
