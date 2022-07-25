#include <stdio.h>
#include "funcs.h"

void alloc_space1() {
    char a = 'a';
    //char a1 = 'a';
    char b[5];
    char c[10];
    char d = 'c';
    printf("&d  = %p %ld\n", &d, c - &d);
    printf("c   = %p %ld\n", c, b - c);
    printf("b   = %p %ld\n", b, &a - b);
    //printf("&a1 = %p\n", &a1);
    printf("&a  = %p\n\n", &a);
}

void alloc_space2(int i, int j) {
    char a = 'a';
    char b[i];
    char c[j];
    char d = 'c';
    printf("&a = %p %ld\n", &a, &a - b);
    printf("b  = %p\n", b);
    printf("c  = %p\n", c);
    printf("&d = %p\n\n", &d);

}

void arrays3() {
    alloc_space1();
    alloc_space2(2, 4);
    alloc_space2(5, 10);

}