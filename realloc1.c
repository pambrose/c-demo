#include <stdio.h>
#include <stdlib.h>
#include <libc.h>
#include "funcs.h"

void realloc1() {
    int *ptr1 = (int *) malloc(2 * sizeof(int));
    *ptr1 = 10;
    *(ptr1 + 1) = 20;

    ptr1 = (int *) realloc(ptr1, 3 * sizeof(int));
    *(ptr1 + 2) = 30;
    for (int i = 0; i < 3; i++)
        printf("%d\n", *(ptr1 + i));

    free(ptr1);
}