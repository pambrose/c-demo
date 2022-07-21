#include <stdio.h>
#include <stdlib.h>
#include <libc.h>
#include "funcs.h"

void string_funcs1() {
    char str1[20];
    strcpy(str1, "hello world 1");
    printf("str1 = %s\n", str1);

    char *str2 = malloc(20 * sizeof(char));
    strcpy(str2, "hello world 2");
    printf("str2 = %s\n", str2);

    char *str3 = malloc(20 * sizeof(char));
    strncpy(str3, "hello world 3", 8);
    printf("str3 = %s\n", str3);

    char *str4 = malloc(40 * sizeof(char));
    sprintf(str4, "The sprintf string is: %s", str3);
    printf("str4 = %s\n", str4);
}