#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void malloc2() {
    const int SIZE = 5;
    // Allocate an array of 4 chars
    char *a = malloc(SIZE * sizeof(char));
    *a = 'w';
    *(a + 1) = 'x';
    a[2] = 'y';
    char *b = a + 3;
    *b = 'z';
    printf("a = %s\n", a);
}