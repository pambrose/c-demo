#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void malloc2() {
    const int SIZE = 5;
    // Allocate an array on the heap
    char *a = malloc(SIZE * sizeof(char));
    *a = 'w';
    *(a + 1) = 'x';
    a[2] = 'y';
    char *b = a + 3;
    *b = 'z';
    b[1] = '\0';
    printf("a = %s a+2 = %s\n", a, a + 2);
    printf("b = %s b-3 = %s\n", b, b - 3);
    // Free memory allocated on the heap
    free(a);
}