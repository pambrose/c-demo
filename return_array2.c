#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

int *make_array2(int a) {
    int *int_vec = malloc(a * sizeof(int));
    for (int i = 0; i < a; i++)
        int_vec[i] = i * 10;
    return int_vec;
}

void return_array2() {
    int *vec = make_array2(5);
    for (int i = 0; i < 5; i++)
        printf("vec[%d] = %d\n", i, vec[i]);
    free(vec);
}