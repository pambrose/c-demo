#include <stdio.h>
#include <stdlib.h>
#include <libc.h>
#include "funcs.h"

void realloc1() {
    int *ptr = malloc(2 * sizeof(int));
    *ptr = 10;
    *(ptr + 1) = 20;

    // Expand the memory allocated on the heap
    ptr = realloc(ptr, 3 * sizeof(int));
    *(ptr + 2) = 30;
    for (int i = 0; i < 3; i++)
        printf("Expand: %d\n", *(ptr + i));

    // Contract the memory allocated on the heap
    ptr = realloc(ptr, 1 * sizeof(int));
    for (int i = 0; i < 1; i++)
        printf("Contract: %d\n", *(ptr + i));

    free(ptr);
}