#include <stdio.h>

int main() {
    int prefix, identifier, publisher, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &publisher, &item, &check);

    printf("GS1 prefix: %03d\n", prefix);
    printf("Group identifier: %d\n", identifier);
    printf("Publisher code: %03d\n", publisher);
    printf("Item number: %05d\n", item);
    printf("Check digit: %d\n", check);
}
