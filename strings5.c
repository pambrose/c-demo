#include <stdio.h>
#include <string.h>
#include "funcs.h"

void strings5() {
    char vec[7];
    strcpy(vec, "AbBbCc");
    printf("vec = %s\n", vec);

    // Try this with a length of 7
    for (int i = 0; i < 6; i++)
        printf("char %d = %c\n", i, (vec[i])++);
    printf("vec = %s\n", vec);
}