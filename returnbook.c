#include "header.h"

void return_book(ST *head, ISSUE *ihead)
{
    ST *book;
    ISSUE *issue;

    int book_id, user_id;
    int due_date, return_date;
    int late_days;

    printf("Enter Book ID: ");
    scanf("%d", &book_id);

    printf("Enter User ID: ");
    scanf("%d", &user_id);

    /* Search issue record */

    issue = ihead;

    while(issue != NULL)
    {
        if(issue->book_id == book_id &&
           issue->user_id == user_id)
        {
            break;
        }

        issue = issue->next;
    }

    if(issue == NULL)
    {
        printf("Issue record not found\n");
        return;
    }

    if(issue->returned == 1)
    {
        printf("This book is already returned\n");
        return;
    }

    /* Enter dates */

    printf("Enter Due Date (day): ");
    scanf("%d", &due_date);

    printf("Enter Return Date (day): ");
    scanf("%d", &return_date);

    /* Calculate fine */

    if(return_date > due_date)
    {
        late_days = return_date - due_date;
        issue->fine = late_days * 5;
    }
    else
    {
        issue->fine = 0;
    }

    /* Store return date */

    sprintf(issue->return_date, "%d", return_date);

    /* Find book */

    book = head;

    while(book != NULL)
    {
        if(book->book_id == book_id)
            break;

        book = book->next;
    }

    if(book == NULL)
    {
        printf("Book record not found\n");
        return;
    }

    /* Increase quantity */

    book->quantity++;

    /* Mark as returned */

    issue->returned = 1;

    printf("\nBook returned successfully\n");
    printf("Fine = Rs.%d\n", issue->fine);
}
