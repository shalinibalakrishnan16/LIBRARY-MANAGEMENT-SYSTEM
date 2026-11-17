#include"header.h"
void issue_book(ST *head, ISSUE **ihead)
{
    ST *ptr;
    ISSUE *temp;

    int book_id;

    printf("Enter Book ID: ");
    scanf("%d", &book_id);

    /* Search book */
    ptr = head;

    while(ptr != NULL)
    {
        if(ptr->book_id == book_id)
            break;

        ptr = ptr->next;
    }

    if(ptr == NULL)
    {
        printf("Book not found\n");
        return;
    }

    /* Check quantity */
    if(ptr->quantity == 0)
    {
        printf("Book not available\n");
        return;
    }

    /* Create issue node */
    temp = malloc(sizeof(ISSUE));

    temp->book_id = book_id;

    printf("Enter User ID: ");
    scanf("%d", &temp->user_id);

    printf("Enter User Name: ");
    scanf(" %[^\n]", temp->user_name);

    printf("Enter Issue Date: ");
    scanf("%s", temp->issue_date);

    printf("Enter Due Date: ");
    scanf("%s", temp->due_date);

    strcpy(temp->return_date, "Not Returned");

    temp->fine = 0;

    /* Add issue record */
    temp->next = *ihead;
    *ihead = temp;

    /* Reduce book quantity */
    ptr->quantity--;

    printf("Book issued successfully\n");
}
