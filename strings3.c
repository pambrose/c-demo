#include <stdio.h>
#include <string.h>
#include "funcs.h"

void strings3() {
    char *str = "Hello";
    unsigned long len = strlen(str);

    for (int i = 0; i < len; i++)
        printf("char %d = %c\n", i, *(str++));
    printf("str = %s\n", str);
    for (int i = 0; i < len; i++)
        printf("char %d = %c\n", i, *(--str)); // Notice prefix decrement
    printf("str = %s\n", str);

    //(*str)++;  // Not allowed
}