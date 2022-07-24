#include <stdio.h>
#include <string.h>
#include "funcs.h"

void strings4() {
    char vec[6];
    vec[0] = 'H';
    vec[1] = 'e';

    *(vec + 2) = 'l';
    *(vec + 3) = 'l';

    char *str = vec;
    *(str + 4) = 'o';
    *(str + 5) = '\0';

    printf("vec = %p, str = %p\n", vec, str);
    printf("vec = %s, str = %s\n", vec, str);
    printf("strlen() = %ld and %ld\n", strlen(vec), strlen(str));
}