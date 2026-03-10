#include <stdio.h>
#include <string.h>

struct book 
{
    char title[50];
    int price;
};

int main()
{
    struct book books[2] = {
        {"C Programming Language", 450},
        {"Embedded Systems Basics", 500}
    };

    int choice;

    printf("Enter the number to choose the book in the list:\n");
    printf("1. C programming\n");
    printf("2. Embedded systems\n");

    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("The Book name is %s\n", books[0].title);
        printf("Cost is %d\n", books[0].price);
    }
    else if(choice == 2)
    {
        printf("The Book name is %s\n", books[1].title);
        printf("Cost is %d\n", books[1].price);
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}
