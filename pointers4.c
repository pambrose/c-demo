#include <stdio.h>
#include "funcs.h"

void pointers4() {
    int v[] = {10, 20, 30};
    int *p = v;

    printf("sizeof(v) = %ld\n", sizeof(v));
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(p) = %ld\n", sizeof(p));   // differs from v
    printf("sizeof(*p) = %ld\n", sizeof(*p));
}