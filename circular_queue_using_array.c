#include <stdio.h>
#define MAX_LENGTH 10
#include <stdlib.h>

int cqueue[MAX_LENGTH];
int rear = -1, front = -1;

void insert()
{
    if ((rear + 1) % MAX_LENGTH == front)
        printf("Queue Overflown");

    else
    {
        if (rear == -1 && front == -1)
        {
            rear = 0;
            front = 0;
        }

        else
            rear = (rear + 1) % MAX_LENGTH;

        printf("Enter the element: ");
        scanf("%d", &cqueue[rear]);
    }
}

void delete()
{
    if (rear < 0 && front < 0)
        printf("Queue is Empty");

    else
    {
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }

        else
            front = (front + 1) % MAX_LENGTH;
        printf("Element Deleted Successfully");
    }
}

void display()
{
    if (rear < 0 && front < 0)
        printf("Queue is Empty");

    else
    {
        int i;
        printf("The elements of the queue are: ");
        for (i = front; i!=rear; i=(i+1)%MAX_LENGTH)
            printf("%d ", cqueue[i]);

            printf("%d", cqueue[i]);
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