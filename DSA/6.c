#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    int i,j,n;
    char str[25][25],temp[25];
	clrscr();
    printf("Enter the number of words :");
    scanf("%d",&n);
    printf("Enter the strings :");
    for(i=0;i<=n;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nSorted Strings :\n");
    for(i=0;i<=n;i++)
    {
        puts(str[i]);
    }
    getch();
}
