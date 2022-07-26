#include <stdio.h>
#include <strings.h>
#include "funcs.h"

struct Book {
    char title[50];
    char author[50];
};

void update_book_val(struct Book book) {
    strcpy(book.title, "Hamlet");
    strcpy(book.author, "William Shakespeare");
}

void update_book_ref(struct Book *book) {
    strcpy(book->title, "Hamlet");
    strcpy(book->author, "William Shakespeare");
}

void structs3() {
    struct Book book;
    strcpy(book.title, "War and Peace");
    strcpy(book.author, "Leo Tolstoy");

    update_book_val(book);
    printf("Book title/author: %s/%s\n", book.title, book.author);

    update_book_ref(&book);
    printf("Book title/author: %s/%s\n", book.title, book.author);
}