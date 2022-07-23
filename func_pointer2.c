#include <stdio.h>
#include <string.h>
#include "funcs.h"

int triple_it(int x) {
    return x * 3;
}

int hof(int (*func_ref)(int), int x, int y) {
    return func_ref(x) + func_ref(y);
}

void func_pointer2() {
    int (*func_ptr)(int) = triple_it;
    int result = hof(func_ptr, 2, 3);
    printf("hof() result is: %d\n", result);
}