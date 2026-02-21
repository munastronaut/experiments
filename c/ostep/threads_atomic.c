#include <pthread.h>
#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>

atomic_int counter = 0;
int loops;

void *worker(void *arg) {
    for (int i = 0; i < loops; ++i)
        ++counter;
    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s <value>\n", argv[0]);
        exit(1);
    }
    loops = atoi(argv[1]);
    pthread_t p1, p2;
    printf("Initial value : %d\n", counter);

    pthread_create(&p1, NULL, worker, NULL);
    pthread_create(&p2, NULL, worker, NULL);
    pthread_join(p1, NULL);
    pthread_join(p2, NULL);
    printf("Final value   : %d\n", counter);
    return 0;
}
