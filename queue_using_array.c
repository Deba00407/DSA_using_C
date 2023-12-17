#include <stdio.h>
#define MAX_LENGTH 10
#include <stdlib.h>

int queue[MAX_LENGTH];
int rear = -1, front = 0;

void insert()
{

    if (rear == MAX_LENGTH - 1)
        printf("Queue Overflown");

    else
    {
        printf("\nEnter the element: ");
        rear++;
        scanf("%d", &queue[rear]);
    }
}

void delete()
{

    if (rear < 0)
        printf("Queue is Empty");

    else
    {
        // int i;
        // queue[front] = queue[front + 1];
        front++;
        printf("\nElement deleted successfully.");
    }
}

void display()
{
    if (rear < 0)
        printf("Queue is Empty");

    else
    {
        printf("The elements of the queue are: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}

void main()
{
    int c;
    printf("---Menu:---------------------------------------\n");
    printf("1. Enter 1 to insert element.\n");
    printf("2. Enter 2 to delete element.\n");
    printf("3. Enter 3 to display elements of the queue.\n");
    printf("4. Enter 4 to exit the program.\n");
    printf("-------------------------------------------------");

    while (1)
    {

        printf("\n\nEnter your choice: ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            insert();
            break;

        case 2:
            delete ();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("\nThank You");
            exit(0);

        default:
            printf("Invalid Input");
            break;
        }
    }
}