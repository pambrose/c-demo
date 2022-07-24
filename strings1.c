#include <stdio.h>
#include <string.h>
#include "funcs.h"

void strings1() {
    char str[] = "Hello, World!";
    printf("str address = %p\n", str);
    printf("str = %s\n", str);
    printf("strlen(str) = %ld\n", strlen(str));

    // Cannot do this: str++;
    for (int i = 0; str[i] != '\0'; i++)
        printf("char %d = %c and %c\n", i, str[i], *(str + i));
}