#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void malloc1() {
    const int SIZE = 4;
    // Allocate memory on the heap
    int *a = malloc(SIZE * sizeof(int));
    *a = 11;
    *(a + 1) = 22;
    a[2] = 33;

    int *b = a + 3;
    *b = 44;

    for (int i = 0; i < SIZE; i++)
        printf("a[%d] = %d, *(a + i) = %d\n", i, a[i], *(a + i));
    for (int i = 0; i < SIZE; i++)
        printf("b[%d-3] = %d, *(b-3+i) = %d\n", i, b[i - 3], *(b - 3 + i));

    printf("Unexpected sizeof(a) = %ld\n", sizeof(a));

    free(a); // Free memory allocated on the heap
}