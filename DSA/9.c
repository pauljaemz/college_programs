#include<stdio.h>
#include<conio.h>

int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);

void main()
{
    top = -1;
	clrscr();
    printf("\nEnter the size of the stack[max = 100] :");
    scanf("%d", &n);
    printf("\tStack operations using array");

    printf("\n\t 1.PUSH\t 2.POP\t 3.DISPLAY\t 4.EXIT");
    do
    {
        printf("\nEnter the choice :");
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
                printf("\n\tExit Point");
                break;
            }
        default:
            {
                printf("\n\tPlease enter the valid choice ");
            }

        }
    }
    while(choice != 4);
        getch();

}
void push()
{
    if(top >= n-1)
    {
        printf("\n\tStack is Overflow");
    }
    else
    {
        printf("Enter the value to pushed :");
        scanf("%d", &x);
        top ++;
        stack[top] = x;
    }
}
void pop()
{
    if(top <= -1)
    {
        printf("\n\tStack is underflow");
    }
    else
    {
        printf("\n\tThe popped elements is %d", stack[top]);
        top--;
    }
}
void display()
{
    if(top >= 0)
    {
        printf("\nThe elements in stack \n");
        for(i=top; i>=0; i--)
            printf("\n%d", stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\nStack is empty");
    }
}
