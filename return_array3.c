#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

int *make_array3(int a) {
    int *int_vec = malloc(a * sizeof(int));
    return int_vec;
}

void return_int_array3() {
    for (long i = 0; i <= INT64_MAX; i++) {
        int *vec = make_array3(rand());
        if (i % 1000000 == 0) {
            printf("%ld\n", i);
        }
    }
}