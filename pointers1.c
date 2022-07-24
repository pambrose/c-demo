#include <stdio.h>
#include "funcs.h"

void pointers1() {
    int i = 100;
    int *p = &i;
    int **q = &p;
    printf("i = %d, p = %p, q = %p\n", i, p, q);
    printf("*p = %d **q = %d\n", *p, **q);
    i++;
    printf("i = %d, *p = %d\n", i, *p);
    (*p)++;
    printf("i = %d, *p = %d\n", i, *p);
}