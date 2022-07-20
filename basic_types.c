#include <stdio.h>
#include "basic_types.h"

void basic_types() {
    short s = 32;
    int i = 5;
    unsigned u = 50;
    long int l = 100;
    float f = 9.0;
    double d = 5.0;
    char c = 'a';

    printf("short s=%hi (%ld/%ld bytes)\n", s, sizeof(s), sizeof(short));
    printf("int i=%d (%ld/%ld bytes)\n", i, sizeof(i), sizeof(int));
    printf("unsigned u=%u (%ld/%ld bytes)\n", u, sizeof(u), sizeof(unsigned));
    printf("long int l=%ld (%ld/%ld bytes)\n", l, sizeof(l), sizeof(long int));
    printf("float f=%f (%ld/%ld bytes)\n", f, sizeof(f), sizeof(float));
    printf("double d=%lf (%ld/%ld bytes)\n", d, sizeof(d), sizeof(double));
    printf("char c=%c (%ld/%ld bytes)\n", c, sizeof(c), sizeof(char));
}
