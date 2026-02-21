#include <stdio.h>

int main() {
    double constexpr PI = 3.14159;
    double constexpr FOUR_THIRDS = 4.0 / 3.0;
    double r;

    printf("Enter radius of sphere (in meters): ");
    scanf("%lf", &r);

    printf("Volume of sphere with radius of %g meters: %g\n", r, FOUR_THIRDS * PI * r * r * r);
}
