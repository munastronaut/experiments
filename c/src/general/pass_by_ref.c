#include <stdio.h>

void change_number(int *number, int new_value) { *number = new_value; }

int main() {
    int x = 42;
    printf("Value of x: %d\n", x);

    change_number(&x, 67);
    printf("Value of x: %d\n", x);

    return 0;
}
