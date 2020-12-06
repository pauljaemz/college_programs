#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
} * head;


void create(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node*));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted\n");
    }
}

void search()
{
    struct node *ptr;
    int item, i=0, flag;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while(ptr != NULL)
        {
            if(ptr->data == item)
            {
                printf("Item found at location %d", i+1);
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if(flag == 1)
        {
            printf("Item not found\n");
        }
    }
}

void main()
{
    int choice, item;
	clrscr();
    while(choice != 3)
    {
        printf("\n1.Create\n2.Search.\n3.Exit.\n4.Enter your choice?");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            {
                printf("\nEnter the item\n");
                scanf("%d", &item);
                create(item);
                break;
            }
        case 2:
            {
                search();
                break;
            }
        case 3:
            {
                break;
            }
        default:
            {
                printf("\nPlease enter valid choice\n");
            }
        }
    }
	getch();
}
