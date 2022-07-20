#include <stdio.h>
#include <libc.h>
#include "funcs.h"

void arrays1() {
    const int SIZE = 3;
    // Allocate an array of 3 integers on the stack
    int a[SIZE];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    for (int i = 0; i < SIZE; i++)
        printf("a[%d] = %d\n", i, a[i]);
    printf("sizeof(a) = %ld\n", sizeof(a));
}