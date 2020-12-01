#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10], b[10][3],m,n, s=1,i,j,c=0;
    printf("Enter the order m * n of the sparse matrix\n");
    scanf("%d%d", &m,&n);
    printf("Enter the elements in the sparse matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The given matrix is: ");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                b[s][0] = i;
                b[s][1] = j;
                b[s][2] = a[i][j];
                s++; c++;
            }
        }
    }
    b[0][0] = m;
    b[0][1] = n;
    b[0][2] = c;

    printf("\n The sparse matrix is given by :");
    printf("\n");

    for(i=0;i<s;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
