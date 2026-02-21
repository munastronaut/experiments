#include <stdio.h>

int main() {
    double amount, interest, monthly;

    printf("Enter amount of loan: $");
    scanf("%lf", &amount);
    printf("Enter interest rate: ");
    scanf("%lf", &interest);
    printf("Enter monthly payment: $");
    scanf("%lf", &monthly);

    double balance = amount;
    double normalized = interest / 100.0 / 12.0;

    printf("\n");
    printf("Balance after first payment: \t$%.2f\n", balance = balance - monthly + balance * normalized);
    printf("Balance after second payment: \t$%.2f\n", balance = balance - monthly + balance * normalized);
    printf("Balance after third payment: \t$%.2f\n", balance = balance - monthly + balance * normalized);
}
