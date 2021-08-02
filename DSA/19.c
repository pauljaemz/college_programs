#include<stdio.h>
#include<conio.h>

void main()
{
    int a[100],b[100],m,n,i,j,k, temp;
	clrscr();
	
	printf("Implementation of Merge Sort\n\n");
	
    printf("Enter the number of elements in the first array : ");
    scanf("%d",&m);
	
    printf("Enter the elements : ");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
		
    printf("Enter the number of elements in the second array : ");
    scanf("%d",&n);
	
    printf("Enter the elements :");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<m+n;i++)
        a[m+i]=b[i];
		
    for(j=0;j<(m+n)-1;j++)
    {
        for(k=0;k<(m+n)-j-1;k++)
        {
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
	printf("\nList after merge sort >>> ");
	
    for(i=0;i<m+n;i++)
        printf("%d,",a[i]);
		
    getch();
}

