#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    int check = (3 * (n2 + n4 + n6 + n8 + n10 + n12) + (n1 + n3 + n5 + n7 + n9 + n11)) % 10;

    if (check != 0)
        check = 10 - check;

    printf("Check digit: %d\n", check);
    printf("Full EAN w/ check digit: %d%d%d%d%d%d%d%d%d%d%d%d%d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, check);
}
