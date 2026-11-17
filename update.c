#include"header.h"
void update_book(ST *head)
{
    ST *ptr;
    char choice;
    int id;
    char name[50];

    printf("\n----- Update Book Details -----\n");
    printf("A. By Book ID\n");
    printf("B. By Book Name\n");
    printf("C. Back to Main Menu\n");

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
                printf("Enter new Book Title: ");
                scanf(" %[^\n]", ptr->title);

                printf("Enter new Author Name: ");
                scanf(" %[^\n]", ptr->author);

                printf("Enter new Quantity: ");
                scanf("%d", &ptr->quantity);

                printf("Book details updated successfully.\n");
                return;
            }

            ptr = ptr->next;
        }

        printf("Book not found.\n");
    }

    else if(choice == 'B' || choice == 'b')
    {
        printf("Enter Book Name: ");
        scanf(" %[^\n]", name);

        while(ptr != NULL)
        {
            if(strcmp(ptr->title, name) == 0)
            {
                printf("Enter new Book Title: ");
                scanf(" %[^\n]", ptr->title);

                printf("Enter new Author Name: ");
                scanf(" %[^\n]", ptr->author);

                printf("Enter new Quantity: ");
                scanf("%d", &ptr->quantity);

                printf("Book details updated successfully.\n");
                return;
            }

            ptr = ptr->next;
        }

        printf("Book not found.\n");
    }

    else if(choice == 'C' || choice == 'c')
    {
        return;
    }

    else
    {
        printf("Invalid choice.\n");
    }
}
