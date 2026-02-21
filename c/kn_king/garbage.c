#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    uint64_t n;
    printf("n = %" PRIu64 ", hex is %#" PRIx64 "\n", n, n);
}
