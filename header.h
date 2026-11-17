#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct book
{
    int book_id;
    char title[50];
    char author[50];
    int quantity;
    struct book *next;
} ST;

typedef struct issue
{
    int issue_id;
    int book_id;
    int user_id;
    char user_name[50];
    char issue_date[20];
    char due_date[20];
    char return_date[20];
    int fine;
    int returned;
    struct issue *next;
} ISSUE;

/* Function declarations */

void add_begin(ST **);
void update_book(ST *);
void delete_book(ST **);
void search_book(ST *);
void view_books(ST *);

void issue_book(ST *, ISSUE **);
void return_book(ST *, ISSUE *);
void list_issued_books(ST *, ISSUE *);

void save_data(ST *, ISSUE *);

#endif
