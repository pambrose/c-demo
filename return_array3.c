#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "funcs.h"

char *make_array3(int a) {
    char *str = malloc(a * sizeof(char));
    return str;
}

void return_array3() {
    for (long i = 0; i <= INT64_MAX; i++) {
        char *vec = make_array3(1000000);
        strcpy(vec, "hello");
        if (i % 1000000 == 0)
            printf("%ld\n", i);
    }
}