#include <stdio.h>
#include <strings.h>
#include "funcs.h"

struct Book {
    int id;
    char title[50];
    char author[50];
};

void structs1() {
    struct Book book;
    book.id = 1;
    strcpy(book.title, "Jaws");
    strcpy(book.author, "Peter Benchley");
    printf("Book id/title/author: %d/%s/%s\n",
           book.id, book.title, book.author);
}