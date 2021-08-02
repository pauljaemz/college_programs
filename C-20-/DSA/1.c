#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],b[100],m,n,i;
	clrscr();
    printf("Enter the number of elements in the array :");
    scanf("%d",&m);

    printf("Enter %d integers :",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the number if elements in the second array :");
    scanf("%d",&n);

    printf("Enter %d integers :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        a[m+i] = b[i];
    }
    printf("The merged array elements are :");
    for(i=0;i<(m+n);i++)
    {
        printf("%d,",a[i]);
    }
    getch();
}
