#include "header.h"

int main()
{
    ST *head = NULL;
    ISSUE*ihead=NULL;
    int choice;

    while(1)
    {
        printf("\n");
        printf("========================================\n");
        printf(" LIBRARY MANAGEMENT SYSTEM\n");
        printf("========================================\n");
        printf("1. Add New Book\n");
        printf("2. Update Book Details\n");
        printf("3. Remove Book\n");
        printf("4. Search Book\n");
        printf("5. View All Books\n");
        printf("6. Issue Book\n");
        printf("7. Return Book\n");
        printf("8. List Issued Books\n");
        printf("9. Save\n");
        printf("10. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                add_begin(&head);
                break;

            case 2:
                update_book(head);
                break;

            case 3:
                delete_book(&head);
                break;

            case 4:
                search_book(head);
                break;

            case 5:
                view_books(head);
                break;

            case 6:
                issue_book(head,&ihead);
                break;

            case 7:
                return_book(head,ihead);
                break;

            case 8:
                list_issued_books(head,ihead);
                break;

            case 9:
                save_data(head,ihead);
                break;

            case 10:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
