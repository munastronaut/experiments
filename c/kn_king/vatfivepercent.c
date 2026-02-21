#include <stdio.h>

int main() {
    double amount;

    printf("Enter an amount: $");
    scanf("%lf", &amount);

    printf("With tax added: $%.2f", amount + (amount * 0.05));
}
