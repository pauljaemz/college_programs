#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int first,last,middle,size,i,key,list[100];
	clrscr();
    printf("\nEnter the size of the list :");
    scanf("%d",&size);
    printf("\nEnter the integer values in the ascending order :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&list[i]);
    }
    printf("\nEnter the element to be searched :");
    scanf("%d",&key);
    first = 0;
    last = size-1;
    middle = (first+last)/2;
    while(first<=last)
    {
        if(list[middle]<key)
        {
            first=middle+1;
        }
        else if(list[middle]==key)
        {
            printf("\nElement found at index %d.",middle);
            break;
        }
        else
        {
            last=middle-1;
            middle=(first+last)/2;
        }
    }
    if(first>last)
    {
        printf("\nElement not found in the list. \n");
    }
    getch();
}
