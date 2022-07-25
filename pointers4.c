#include <stdio.h>
#include "funcs.h"

void pointers4() {
    int v[] = {10, 20, 30};
    int *p = v;

    printf("sizeof(v) = %ld\n", sizeof(v));
    printf("sizeof(*v) = %ld\n", sizeof(*v));
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(p) = %ld\n", sizeof(p));   // differs from v
    printf("sizeof(*p) = %ld\n", sizeof(*p));

    for (int i = 0; i < sizeof(v) / sizeof(int); i++)
        printf("v[%d] = %d, *(v + %d) = %d, *(p + %d) = %d\n",
               i, v[i], i, *(v + i), i, *(p + i));
}