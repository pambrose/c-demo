#include <stdio.h>
#include "funcs.h"

void pointers1() {
    int i = 100;
    int *p = &i;
    printf("i = %d, p = %p\n", i, p);
    printf("*p = %d\n", *p);
    i++;
    printf("i = %d, *p = %d\n", i, *p);
    (*p)++;
    printf("i = %d, *p = %d\n", i, *p);
}