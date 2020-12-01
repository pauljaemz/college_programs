#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*front = NULL, *rear = NULL;

void insert(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(front == NULL)
        front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Insertion is Success !!\n");
}
void delete()
{
    if(front == NULL)
        printf("\nQueue is empty!!\n");
    else
    {
        struct Node *temp = front;
        front = front->next;
        printf("\n Deleted element: %d\n", temp->data);
        free(temp);
    }
}
void display()
{
    if(front == NULL)
        printf("\nQueue is Empty!!!\n");
    else
    {
        struct Node *temp = front;
        while(temp ->next != NULL)
        {
            printf("%d----->", temp->data);
            temp = temp ->next;
        }
        printf("%d---->NULL\n", temp->data);
    }
}
int main()
{
    int choice = 0;
    int value = 0;
	clrscr();
    printf("\n Queue Implementation using linked list \n");
    while(choice != 4)
    {
        printf("\n*******MENU*********\n");
        printf("1.Insert\n2.Delete \n3.Display\n4.Exit\n");
        printf("Enter the choice :");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                {
                    printf("Enter the value to be insert :");
                    scanf("%d",&value);
                    insert(value);
                    break;
                }
            case 2:
                {
                    delete();
                    break;
                }
            case 3:
                {
                    display();
                    break;
                }
            case 4:
                {
                    break;
                }
            default:
                {
                    printf("\n Wrong selection!!! Please try again\n");
                }
        }
    }
	getch();
}
