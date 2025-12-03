#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int isLent;
    char borrower[50];
};

struct Book library[100];
int count = 0;


void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &library[count].id);

    printf("Enter Book Title: ");
    scanf("%s", library[count].title);

    printf("Enter Author Name: ");
    scanf("%s", library[count].author);

    library[count].isLent = 0;
    strcpy(library[count].borrower, "None");

    count++;
    printf("Book Added Successfully!\n");
}

void lendBook()
{
    int id;
    printf("\nEnter Book ID to lend: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            if (library[i].isLent == 1)
            {
                printf("Book already lent to: %s\n", library[i].borrower);
                return;
            }
            printf("Enter Borrower's Name: ");
            scanf("%s", library[i].borrower);
            library[i].isLent = 1;
            printf("Book Lent Successfully!\n");
            return;
        }
    }
    printf("Book Not Found!\n");
}

void returnBook()
{
    int id;
    printf("\nEnter Book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {

            if (library[i].isLent == 0)
            {
                printf("Book is already available. Not lent currently.\n");
                return;
            }

            library[i].isLent = 0;
            strcpy(library[i].borrower, "None");

            printf("Book Returned Successfully!\n");
            return;
        }
    }
    printf("Book Not Found!\n");
}

void displayBooks()
{
    printf("\n===== Library Books =====\n");

    if (count == 0)
    {
        printf("No books available!\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        printf("ID: %d | Title: %s | Author: %s | Status: ",
               library[i].id, library[i].title, library[i].author);

        if (library[i].isLent == 0)
            printf("Available\n");
        else
            printf("Lent to %s\n", library[i].borrower);
    }
}

void searchBook()
{
    int id;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            printf("\nBook Found!\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nStatus: ",
                   library[i].id, library[i].title, library[i].author);

            if (library[i].isLent == 0)
                printf("Available\n");
            else
                printf("Lent to %s\n", library[i].borrower);
            return;
        }
    }
    printf("Book Not Found!\n");
}

void deleteBook()
{
    int id, i, j;
    printf("\nEnter Book ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            for (j = i; j < count - 1; j++)
                library[j] = library[j + 1];

            count--;
            printf("Book Deleted Successfully!\n");
            return;
        }
    }
    printf("Book Not Found!\n");
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n2. Search Book\n3. Display Books\n");
        printf("4. Delete Book\n5. Lend Book\n6. Return Book\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            searchBook();
            break;
        case 3:
            displayBooks();
            break;
        case 4:
            deleteBook();
            break;
        case 5:
            lendBook();
            break;
        case 6:
            returnBook();
            break;
        case 7:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}