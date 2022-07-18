#include <stdio.h>
#include "arrays.h"

void arrays1() {
    // Allocate an array of 3 integers
    int a[3];
    a[0] = 0;
    a[1] = 10;
    a[2] = 20;
    for (int i = 0; i < 3; i++)
        printf("a[%d] = %d\n", i, a[i]);
}