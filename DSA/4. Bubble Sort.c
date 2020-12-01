#include<stdio.h>
int main()
{
    int array[100],n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements of the array :");
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(int j=0;j<n-1;j++)
    {
        for(int k=0;k<n-j-1;k++)
        {
            if(array[k]>array[k+1])
            {
                int temp=array[k];
                array[k]=array[k+1];
                array[k+1]=temp;
            }
        }
    }
    printf("Sorted list in order is :\n");

    for(int i=0;i<n;i++)
        printf("%d,",array[i]);

    return 0;
}
