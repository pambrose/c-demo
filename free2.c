#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "funcs.h"

char *get_hello() {
    const int SIZE = 7;
    char *a = malloc(SIZE * sizeof(char));
    strcpy(a, "hello");
    free(a);
    return a;
}

void free2() {
    char *str = get_hello();
    printf("str = %s\n", str);
    free(str);
}