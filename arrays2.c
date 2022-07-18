#include <stdio.h>
#include "arrays.h"

void arrays2() {
    // Allocate and assign an array of 3 integers
    int b[3] = {1, 2, 3};
    int len = sizeof(b) / sizeof(int);
    printf("Size of b = %ld, size of int = %ld, len = %d\n", sizeof(b), sizeof(int), len);
    for (int i = 0; i < len; i++)
        printf("b[%d] = %d\n", i, b[i]);
}