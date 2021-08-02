#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
	int val;
	struct node * next;
};
struct node * head;

void push()
{
	int val;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
	    printf("Not able to push the element");
	}
	else
    {
		printf("Enter the value\n");
		scanf("%d", &val);
		if(head == NULL)
		{
			ptr->val = val;
			ptr->next = NULL;
			head = ptr;
		}
		else
		{
			ptr->val = val;
			ptr->next = head;
			head = ptr;
		}
		printf("Items pushed");
	}
}
void pop()
{
	int item;
	struct node * ptr;
	if(head == NULL)
	{
		printf("Underflow");
	}
	else
	{
		item = head -> val;
		ptr = head;
		head = head->next;
		free(ptr);
		printf("Item popped");
	}
}
void display()
{
	int i;
	struct node * ptr;
	ptr = head;
	if(ptr == NULL)
	{
		printf("Stack is empty\n");
	}
	else
    {
        printf("Printing Stack elements\n");
		while(ptr!=NULL)
		{
			printf("%d\n", ptr->val);
			ptr = ptr -> next;
		}
	}
}
void main()
{
	int choice = 0;
	clrscr();
	printf("\n____________________Stack Operations using linkedlist__________________\n");
	while(choice!= 4)
	{
		printf("\n\n1.Push | 2.Pop | 3.Show | 4.Exit\n");
		printf("Enter the choice\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("Exiting....");
				break;
			}
			default:
			{
				printf("Please enter a valid choice");
			}
		}
	}
	getch();
}



