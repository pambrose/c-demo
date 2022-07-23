#include <stdio.h>
#include <string.h>
#include "funcs.h"

void cli_args2() {
    int argc = 4;
    char *argv[argc];
    argv[0] = "./cmake-build-debug/c_basics";
    argv[1] = "a";
    argv[2] = "bb";
    argv[3] = "ccc";

    // Declare and assign syntax:
    char *argv2[] = {"./cmake-build-debug/c_basics", "a", "bb", "ccc", NULL};

    for (int i = 0; i < argc; i++) {
        size_t len = strlen(argv[i]);
        printf("Arg %d at %p => %p \"%s\" (len=%lu next loc: %p)\n",
               i, &argv[i], argv[i], argv[i], len,
               argv[i] + len + 1);
    }
}