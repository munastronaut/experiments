#include <stdio.h>
#include <stdlib.h>

int main() {
    constexpr double FREEZING_PT = 32.0;
    constexpr double SCALE_FACTOR = 5.0 / 9.0;
    double fahrenheit;

    printf("Enter Fahrenheit temperature: ");
    scanf("%lf", &fahrenheit);

    printf("Celsius equivalent: %.2f", (fahrenheit - FREEZING_PT) * SCALE_FACTOR);

    return EXIT_SUCCESS;
}
