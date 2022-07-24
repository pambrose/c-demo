#include <stdio.h>
#include <string.h>
#include "funcs.h"

void strings5() {
    char vec[7];
    strcpy(vec, "AbBbCc");
    printf("vec = %s\n", vec);

    for (int i = 0; i < 6; i++)  // Try with <= 6
        printf("char %d = %c\n", i, (vec[i])++);

    printf("vec = %s\n", vec);
}