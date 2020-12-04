#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5

void insert();
void delet();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;

void main()
{
    int choice;
	clrscr();
    while(1)
    {
        printf("\t1. Insert 2.Delete 3. Display 4.Quit \n");
        printf("Enter the choice\n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delet();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice");
        }
    }
	getch();
}
void insert()
{
    int item;
    if(rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        if(front == -1)
        front = 0;
        printf("Insert the element in queue :\n");
        scanf("%d", &item);
        rear = rear + 1;
        queue_array[rear] = item;
    }
}
void delet()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is underflow\n");
        return;
    }
    else
    {
        printf("Element deleted from queue is %d\n", queue_array[front]);
        front = front + 1;
    }
}
void display()
{
    int i;
    if(front == -1)
        printf("Queue is Empty\n");
    else
    {
        printf("Queue is :\n");
        for(i = front; i<=rear; i++)
        {
            printf("%d", queue_array[i]);
            printf("\n");
        }
    }

}
