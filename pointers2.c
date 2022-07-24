#include <stdio.h>
#include "funcs.h"

void pointers2() {
    int i = 200;
    int *p = &i;
    int **q = &p;
    printf("&p = %p, q = %p\n", &p, q);
    printf("&i = %p, p = %p, *q = %p\n", &i, p, *q);
    printf("i = %d, *p = %d **q = %d\n", i, *p, **q);
    i++;
    printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
    (*p)++;
    printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
    (**q)++;
    printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
}