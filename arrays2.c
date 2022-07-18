#include <stdio.h>
#include "arrays.h"

void arrays2() {
    // Allocate and assign an array of 3 integers
    int b[3] = {100, 200, 300};
    printf("sizeof(b) = %li, sizeof(int) = %li\n",
           sizeof(b), sizeof(int));
    int len = sizeof(b) / sizeof(int);
    for (int i = 0; i < len; i++)
        printf("b[%d] = %d\n", i, b[i]);
}