#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

int arr[MAX_SIZE], top = -1; // top helps to check for overflow condition in array

void push()
{

    if (top == MAX_SIZE)
        printf("Stack Overflown");

    else
    {
        int n;
        printf("Enter the element: ");
        scanf("%d", &n);
        arr[top + 1] = n;
        top++;
    }
}

void pop()
{

    // If no elements are pushed or all the pushed elements have been popped, then top returns to its initial value of -1.

    if (top == -1)
        printf("\nStack is empty.");

    else
    {
        int n;
        arr[top] = n;
        top--;
        printf("Element Popped Successfully.");
    }
}

void display()
{
    if (top == -1)
        printf("Stack is empty.");

    else
    {
        int i;
        printf("\nThe elements of the stack are: ");
        for (i = 0; i <= top; i++)
            printf("%d ", arr[i]);
    }
}

// Menu driven program showing implementation of stack using array(static DS)
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
            exit(0);
            break;

        default:
            printf("Invalid Input.");
            break;
        }
    }
}