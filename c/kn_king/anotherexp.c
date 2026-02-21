#include <stdio.h>
#include <stdlib.h>

int main() {
    double const FREEZING_PT = 32.0;
    double const SCALE_FACTOR = 5.0 / 9.0;
    double fahrenheit;

    printf("Enter Fahrenheit temperature: ");
    scanf("%lf", &fahrenheit);

    double const celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius equivalent: %.2f", celsius);

    return EXIT_SUCCESS;
}
