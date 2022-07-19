#include <stdio.h>
#include "strings.h"

void strings2() {
    char vec[20];
    vec[0] = 'H';
    vec[1] = 'e';

    *(vec + 2) = 'l';
    *(vec + 3) = 'l';

    char *str = vec;
    *(str + 4) = 'o';
    *(str + 5) = '\0';

    for (int i = 0; str[i] != '\0'; i++)
        printf("char %d = %c\n", i, vec[i]);

    printf("vec = %s\n", vec);
    printf("str = %s\n", str);
}