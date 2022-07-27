#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcs.h"

typedef struct MyObj_struct MyObj;

struct MyObj_struct {
    int int_value;
    char *str_value;

    int (*mult)(MyObj *, int);

    char *(*repeat)(MyObj *, int);
};

int mult_impl(MyObj *this, int val) {
    return this->int_value * val;
}

char *repeat_impl(MyObj *this, int copies) {
    unsigned int len = strlen(this->str_value);
    char *str = malloc((copies * len * sizeof(char)) + 1);
    for (int i = 0; i < copies; i++)
        strcat((str + i), this->str_value);
    str[copies * len] = '\0';
    return str;
}

MyObj *new_MyObj(int int_val, char *str_val) {
    MyObj *obj = malloc(sizeof(MyObj));
    obj->int_value = int_val;
    obj->str_value = str_val;
    obj->mult = mult_impl;
    obj->repeat = repeat_impl;
    return obj;
}

void objects1() {
    MyObj *obj1 = new_MyObj(5, "Hello");
    printf("obj1->mult() result = %d\n", obj1->mult(obj1, 5));
    printf("obj1->repeat() result = %s\n", obj1->repeat(obj1, 3));

    MyObj *obj2 = new_MyObj(7, "World");
    printf("obj2->mult() result = %d\n", obj2->mult(obj2, 4));
    printf("obj2->repeat() result = %s\n", obj2->repeat(obj2, 2));

    free(obj1);
    free(obj2);
}