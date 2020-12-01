#include<stdio.h>
#include<conio.h>
void main()
{
    int array[100],n;
	int i, j, k, temp;
	clrscr();
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements of the array :");
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-j-1;k++)
        {
            if(array[k]>array[k+1])
            {
                temp=array[k];
                array[k]=array[k+1];
                array[k+1]=temp;
            }
        }
    }
    printf("Sorted list in order is :\n");

    for(i=0;i<n;i++)
        printf("%d,",array[i]);

    getch();
}
