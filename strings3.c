#include <stdio.h>
#include <string.h>
#include "funcs.h"

void strings3() {
    char *str = "Hello";
    unsigned long len = strlen(str);

    // increment/decrement str
    for (int i = 0; i < len; i++)
        printf("char %d = %c\n", i, *(str++));
    printf("1st str = %s\n", str);
    for (int i = 0; i < len; i++)
        printf("char %d = %c\n", i, *(--str));
    printf("2nd str = %s\n", str);

    // This is not allowed:
    //(*str)++;
}