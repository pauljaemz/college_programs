#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str1[80], str2[80];
    int k,i,j;
	clrscr();
    printf("Enter the first string :");
    gets(str1);
    printf("Enter the second string :");
    gets(str2);

    k = strlen(str2);
    for(i=0,j=0; str1[i]!='\0' && str2[j]!='\0'; i++)
    {
        if(str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j=0;
        }
    }
    if(j==k)
    {
        printf("Substring found at position %d", i-j+1);
    }
    else{
        printf("Substring not found");
    }
    getch();
}
