#include <stdio.h>

int main() {
    int area, prefix, line;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &prefix, &line);

    printf("You entered %03d.%03d.%04d", area, prefix, line);
}
