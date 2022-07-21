#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void calloc1() {
    const int SIZE = 5;
    // Allocate an array on the heap
    int *c = calloc(SIZE, sizeof(int));
    for (int i = 0; i < SIZE; i++)
        printf("Before assignment: c[%d] = %d\n", i, c[i]);
    for (int i = 0; i < SIZE; i++)
        c[i] = i * 10;
    for (int i = 0; i < SIZE; i++)
        printf("After assignment: c[%d] = %d\n", i, c[i]);
    // Free memory allocated on the heap
    free(c);
}