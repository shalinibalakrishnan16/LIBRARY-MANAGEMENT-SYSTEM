#include"header.h"
void view_books(ST *head)
{
    ST *ptr;

    ptr = head;

    if(ptr == NULL)
    {
        printf("\nNo books available.\n");
        return;
    }

    printf("\n========== ALL BOOKS ==========\n");

    while(ptr != NULL)
    {
        printf("\nBook ID : %d\n", ptr->book_id);
        printf("Title : %s\n", ptr->title);
        printf("Author : %s\n", ptr->author);
        printf("Quantity : %d\n", ptr->quantity);

        ptr = ptr->next;
    }

    printf("\n===============================\n");
}
