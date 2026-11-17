#include"header.h"
void search_book(ST *head)

{
    ST *ptr;
    char choice;
    int id;
    char name[50];
    char author[50];

    printf("\n----- Search Book -----\n");
    printf("A. By Book ID\n");
    printf("B. By Book Name\n");
    printf("C. By Author Name\n");
    printf("D. Back to Main Menu\n");

    printf("Enter choice: ");
    scanf(" %c", &choice);

    ptr = head;

    if(choice == 'A' || choice == 'a')
    {
        printf("Enter Book ID: ");
        scanf("%d", &id);

        while(ptr != NULL)
        {
            if(ptr->book_id == id)
            {
                printf("\nBook Found!\n");
                printf("Book ID : %d\n", ptr->book_id);
                printf("Title : %s\n", ptr->title);
                printf("Author : %s\n", ptr->author);
                printf("Quantity : %d\n", ptr->quantity);
                return;
            }

            ptr = ptr->next;
        }
    }

    else if(choice == 'B' || choice == 'b')
    {
        printf("Enter Book Name: ");
        scanf(" %[^\n]", name);

        while(ptr != NULL)
        {
            if(strcmp(ptr->title, name) == 0)
            {
                printf("\nBook Found!\n");
                printf("Book ID : %d\n", ptr->book_id);
                printf("Title : %s\n", ptr->title);
                printf("Author : %s\n", ptr->author);
                printf("Quantity : %d\n", ptr->quantity);
                return;
            }

            ptr = ptr->next;
        }
    }

    else if(choice == 'C' || choice == 'c')
    {
        printf("Enter Author Name: ");
        scanf(" %[^\n]", author);

        while(ptr != NULL)
        {
            if(strcmp(ptr->author, author) == 0)
            {
                printf("\nBook Found!\n");
                printf("Book ID : %d\n", ptr->book_id);
                printf("Title : %s\n", ptr->title);
                printf("Author : %s\n", ptr->author);
                printf("Quantity : %d\n", ptr->quantity);
                return;
            }

            ptr = ptr->next;
        }
    }

    else if(choice == 'D' || choice == 'd')
    {
        return;
    }

    else
    {
        printf("Invalid choice.\n");
        return;
    }

    printf("Book not found.\n");
}
