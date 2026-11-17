#include"header.h"
void save_data(ST *head, ISSUE *ihead)
{
    ST *bptr;
    ISSUE *iptr;
    FILE *fp;

    /* Save Books */
    fp = fopen("books.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to open books file\n");
        return;
    }

    bptr = head;

    while(bptr != NULL)
    {
        fprintf(fp, "%d|%s|%s|%d\n",
                bptr->book_id,
                bptr->title,
                bptr->author,
                bptr->quantity);

        bptr = bptr->next;
    }

    fclose(fp);


    /* Save Issued Books */
    fp = fopen("issued_books.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to open issued books file\n");
        return;
    }

    iptr = ihead;

    while(iptr != NULL)
    {
        fprintf(fp, "%d|%d|%d|%s|%s|%s|%s|%d\n",
                iptr->issue_id,
                iptr->book_id,
                iptr->user_id,
                iptr->user_name,
                iptr->issue_date,
                iptr->due_date,
                iptr->return_date,
                iptr->fine);

        iptr = iptr->next;
    }

    fclose(fp);

    printf("Data saved successfully\n");
}
