#include <stdio.h>
#include <string.h>
#include "funcs.h"

void cli_args1(int argc, char **argv) {
    printf("The CLI args using []:\n");
    for (int i = 0; i < argc; i++) {
        unsigned long len = strlen(argv[i]);
        printf("Arg %d at %p => %p \"%s\" (len=%lu next loc: %p)\n",
               i, &argv[i], argv[i], argv[i], len,
               argv[i] + len + 1);
    }

    printf("\nThe CLI args using *:\n");
    for (int i = 0; i < argc; i++) {
        unsigned long len = strlen(*(argv + i));
        printf("Arg %d at %p => %p \"%s\" (len=%lu next loc: %p)\n",
               i, argv + i, *(argv + i), *(argv + i), len,
               *(argv + i) + len + 1);
    }
}