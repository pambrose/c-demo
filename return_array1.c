#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

int *make_array1(int a) {
    int int_vec[a];
    for (int i = 0; i < a; i++) {
        int_vec[i] = i * 10;
        printf("int_vec[%d] = %d\n", i, int_vec[i]);
    }
    return int_vec;
}

void return_array1() {
    int *vec = make_array1(5);
    for (int i = 0; i < 5; i++)
        printf("vec[%d] = %d\n", i, vec[i]);
    //free(vec);
}