#include <stdio.h>
#include "funcs.h"

void doubler(int a, int *b) {
    a = a + a;
    *b = *b + *b;
    printf("In doubler() a = %d, *b = %d\n", a, *b);
}

void call_by() {
    int a = 10;
    int b = 20;
    doubler(a, &b);
    printf("In call_by() a = %d, b = %d\n", a, b);
}