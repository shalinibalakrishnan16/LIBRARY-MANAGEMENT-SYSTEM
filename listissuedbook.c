#include"header.h"
void list_issued_books(ST *head, ISSUE *ihead)
{
    ISSUE *iptr;
    ST *bptr;

    iptr = ihead;

    if(iptr == NULL)
    {
        printf("No books issued\n");
        return;
    }

    printf("\n========== ISSUED BOOKS ==========\n");

    while(iptr != NULL)
    {
        printf("\nBook ID : %d", iptr->book_id);

        /* Find Book Title */
        bptr = head;

        while(bptr != NULL)
        {
            if(bptr->book_id == iptr->book_id)
                break;

            bptr = bptr->next;
        }

        if(bptr != NULL)
            printf("\nTitle : %s", bptr->title);

        printf("\nUser ID : %d", iptr->user_id);
        printf("\nUser Name : %s", iptr->user_name);
        printf("\nIssue Date : %s", iptr->issue_date);
        printf("\nDue Date : %s", iptr->due_date);
        printf("\nReturn Date: %s", iptr->return_date);
        printf("\nFine : Rs.%d\n", iptr->fine);

        iptr = iptr->next;
    }

    printf("\n==================================\n");
}
