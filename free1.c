#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "funcs.h"

void free1() {
    const int SIZE = 7;
    char *a = malloc(SIZE * sizeof(char));
    strcpy(a, "hello");
    char *b = a + 2;
    printf("a = %s b = %s\n", a, b);
    free(a);
    free(b);
}