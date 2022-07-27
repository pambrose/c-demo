#include <stdio.h>
#include <string.h>
#include "funcs.h"

typedef int (*func_ptr)(int);
typedef func_ptr (*hof_ptr)();

int quad_it(int x) { return x * 4; }

func_ptr hof_retval() { return quad_it; }

void func_pointer3() {
    func_ptr g = hof_retval();
    int x = g(5);
    printf("hof_retval value is: %d\n", x);

    int y = hof_retval()(6);
    printf("hof_retval value is: %d\n", y);

    hof_ptr hof = hof_retval;
    int z = hof()(7);
    printf("hof_retval value is: %d\n", z);
}