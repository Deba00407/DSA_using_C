// Program showing the implementation of stack using dynamic memory allocation in linked list

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

int top = -1;
int *ptr;

void push()
{

    if (top == MAX_SIZE)
    {
        printf("Stack Overflown");
        printf("Enter 1 to increment size of stack or 2 to let the stack remain of assigned size.");
        int n;
        scanf("%d", &n);

        if (n == 1)
        {
            int p;
            printf("Enter the required size to increment: ");
            scanf("%d", &p);
            ptr = (int *)realloc(ptr, MAX_SIZE + p);

            printf("Enter the element to insert: ");
            top++;
            scanf("%d", ptr + top);
        }
    }
    
    printf("Enter the element to insert: ");
    top++;
    scanf("%d", ptr + top);
}

void pop();
void display();

void main()
{

    printf("---------------------------------------");
    printf("\nMenu:-\n");
    printf("1. Enter 1 to push element.\n");
    printf("2. Enter 2 to pop element.\n");
    printf("3. Enter 3 to display the stack.\n");
    printf("4. Enter 4 to exit.\n");
    printf("----------------------------------------");

    while (1)
    {
        int r;
        printf("\nEnter your response: ");
        scanf("%d", &r);

        switch (r)
        {
        case 1:
            ptr = (int *)malloc(MAX_SIZE * sizeof(int));
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Thank You.");
            free(ptr);
            exit(0);

        default:
            printf("Invalid Input.");
            break;
        }
    }
}