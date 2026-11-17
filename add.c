#include"header.h"
void add_begin(ST **head)
{
    ST *temp;

    temp = malloc(sizeof(ST));

    printf("Enter Book ID: ");
    scanf("%d", &temp->book_id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", temp->title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", temp->author);

    printf("Enter Quantity: ");
    scanf("%d", &temp->quantity);

    temp->next = *head;
    *head = temp;

    printf("Book added successfully.\n");
}
