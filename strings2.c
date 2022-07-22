#include <stdio.h>
#include <string.h>
#include "funcs.h"

void strings2() {
    char *str = "Hello";
    printf("str = %p\n", str);

    for (int i = 0; str[i] != '\0'; i++)
        printf("char %d = %c\n", i, *(str + i));
    printf("str = %s\n", str);
    unsigned long len = strlen(str);
    printf("strlen(str) = %ld\n", len);

    // Can also increment str
    for (int i = 0; i < len; i++)
        printf("char %d = %c\n", i, *(str++));
    printf("str = %s\n", str);
}