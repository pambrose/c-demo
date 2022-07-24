#include <stdio.h>
#include "funcs.h"

void pointers3() {
    int v[] = {10, 20, 30};
    int *p = v;

    printf("v = %p, p = %p\n", v, p);
    printf("v[0] = %d, *v = %d, *p = %d\n",
           v[0], *v, *p);
    printf("v[1] = %d, *(v + 1) = %d, *(p + 1) = %d\n",
           v[1], *(v + 1), *(p + 1));
    printf("sizeof(v) = %ld\n", sizeof(v));
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(p) = %ld\n", sizeof(p));   // differs from v
    printf("sizeof(*p) = %ld\n", sizeof(*p)); // same as sizeof(int)
    for (int i = 0; i < sizeof(v) / sizeof(int); i++)
        printf("v[%d] = %d, *(v + %d) = %d, *(p + %d) = %d\n",
               i, v[i], i, *(v + i), i, *(p + i));
}