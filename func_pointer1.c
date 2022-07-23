#include <stdio.h>
#include <string.h>
#include "funcs.h"

int double_it(int x) {
    return x * 2;
}

void func_pointer1() {
    // & and * are optional with function pointers.
    int (*func_ptr1)(int) = &double_it;
    int v1 = (func_ptr1)(6);
    printf("Value is: %d\n", v1);

    int (*func_ptr2)(int) = double_it;
    int v2 = (*func_ptr2)(7);
    printf("Value is: %d\n", v2);
}