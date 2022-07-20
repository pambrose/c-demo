#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void malloc1() {
    const int SIZE = 4;
    // Allocate an array of 4 integers
    int *a = malloc(SIZE * sizeof(int));
    *a = 11;
    *(a + 1) = 22;
    a[2] = 33;
    int *b = a + 3;
    *b = 44;
    for (int i = 0; i < SIZE; i++)
        printf("a[%d] = %d\n", i, a[i]);
    printf("incorrect sizeof(a) = %ld\n", sizeof(a));
}