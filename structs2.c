#include <stdio.h>
#include <strings.h>
#include "funcs.h"

struct Book {
    int id;
    char title[50];
    char author[50];
};

void structs2() {
    struct Book books[2];
    books[0].id = 1;
    strcpy(books[0].title, "Don Quixote");
    strcpy(books[0].author, "Miguel de Cervantes");
    printf("Book id/title/author: %d/%s/%s\n",
           books[0].id, books[0].title, books[0].author);

    struct Book *ptr = books;
    (*(ptr + 1)).id = 2;
    strcpy((*(ptr + 1)).title, "Ulysses");
    strcpy((*(ptr + 1)).author, "James Joyce");
    printf("Book id/title/author: %d/%s/%s\n",
           (*(ptr + 1)).id, (*(ptr + 1)).title, (*(ptr + 1)).author);
}