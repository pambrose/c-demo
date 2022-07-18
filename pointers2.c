#include <stdio.h>
#include "pointers.h"

void pointers2() {
    int v[] = {10, 20, 30, 40, 50};
    int *p = v;

    printf("v = %p, p = %p\n", v, p);
    printf("v[0] = %d, *p = %d\n", v[0], *p);
    printf("v[1] = %d, *(p+1) = %d\n", v[1], *(p + 1));
    for (int i = 0; i < sizeof(v) / sizeof(int); i++)
        printf("v[%d] = %d, *(p+%d) = %d\n", i, v[i], i, *(p + i));
}