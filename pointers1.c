#include <stdio.h>
#include "funcs.h"

void pointers1() {
    int i = 100;
    int *p = &i;
    printf("&i = %p, p = %p\n", &i, p);
    printf("i = %d, *p = %d\n", i, *p);
    i++;
    printf("i = %d, *p = %d\n", i, *p);
    (*p)++;
    printf("i = %d, *p = %d\n", i, *p);
}