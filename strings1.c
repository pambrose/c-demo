#include <stdio.h>
#include "strings.h"

void strings1() {
    char *str = "Hello, World!";

    printf("str = %p\n", str);
    printf("1st char = %c\n", *str);
    printf("2nd char = %c\n", *(str + 1));

    for (int i = 0; str[i] != '\0'; i++)
        printf("char %d = %c\n", i, *(str + i));

    printf("3rd char = %c\n", str[2]);
    for (int i = 0; str[i] != '\0'; i++)
        printf("char %d = %c\n", i, str[i]);
}