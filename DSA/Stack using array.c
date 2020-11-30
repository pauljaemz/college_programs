#include<stdio.h>
int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top = -1;
    printf("\nEnter the size of the stack[max = 100] :");
    scanf("%d", &n);
    printf("\n\tStack operations using array");

    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
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
        return 0;

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
        printf("\n\nThe elements in stack \n");
        for(i=top; i>=0; i--)
            printf("\n%d", stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\nStack is empty");
    }
}
