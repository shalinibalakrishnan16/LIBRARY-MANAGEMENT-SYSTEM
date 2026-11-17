#include"header.h"
void delete_book(ST **head)
{
    ST *ptr, *prev;
    char choice;
    int id;
    char name[50];

    printf("\n----- Remove Book -----\n");
    printf("A. By Book ID\n");
    printf("B. By Book Name\n");
    printf("C. Back to Main Menu\n");

    printf("Enter choice: ");
    scanf(" %c", &choice);

    ptr = *head;
    prev = NULL;

    if(choice == 'A' || choice == 'a')
    {
        printf("Enter Book ID: ");
        scanf("%d", &id);

        while(ptr != NULL)
        {
            if(ptr->book_id == id)
            {
                if(prev == NULL)
                {
                    *head = ptr->next;
                }
                else
                {
                    prev->next = ptr->next;
                }

                free(ptr);

                printf("Book deleted successfully.\n");
                return;
            }

            prev = ptr;
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
                if(prev == NULL)
                {
                    *head = ptr->next;
                }
                else
                {
                    prev->next = ptr->next;
                }

                free(ptr);

                printf("Book deleted successfully.\n");
                return;
            }

            prev = ptr;
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
