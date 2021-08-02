#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,item,loc=0,loc1=0,n,r,c;
    int ar[10][10];
	clrscr();
    printf("Enter the number of rows in the array :");
    scanf("%d",&r);
    printf("Enter the number of columns in the array :");
    scanf("%d",&c);

    printf("Enter the elments of the array :");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("Enter the element to be searched :");
    scanf("%d",&item);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(item == ar[i][j])
            {
                loc = i;
                loc1 = j;
                break;
            }
        }
    }
    printf("\nThe item found in %d Row and %d Column (a%d%d).",loc,loc1,loc,loc1);
    printf("\nSearch Completed.");
    getch();
}
