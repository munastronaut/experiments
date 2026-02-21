#include <stdlib.h>
#include <stdio.h>

size_t parent[6];

void make_set(size_t v) {
    parent[v] = v;
}

size_t find_set(size_t v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}

void union_sets(size_t a, size_t b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

int main() {
    for (size_t i = 0; i < 6; i++)
        make_set(i);

    union_sets(3, 2);
    union_sets(1, 4);

    for (size_t i = 0; i < 6; i++)
        printf("Union set element at index %zu is %zu\n", i, find_set(i));
}
