//source : https://prepinsta.com/c-program/to-replace-a-substring-in-a-string/
//Algorithm

//Start
//Accept the main string
//Accept the sub-string
//Accept the string, with which to replace the sub-string.
//Check if the sub-string is present in the main string or not
//If the sub-string is not present in the main string, terminate the program.
//If the substring is present in the main string, than continue.
//Iterate each character of the main string
//Replace the sub-string with the inputed string.
//Print the new string.

#include<stdio.h>
#include<string.h>
#include<conio.h>

void replaceSubstring(char [],char[],char[]);

void main()
{
	char string[100],sub[100],new_str[100];
	clrscr();
	printf("\nEnter a string: ");
	gets(string);
	printf("\nEnter the substring: ");
	gets(sub);
	printf("\nEnter the new substring: ");
	gets(new_str);
	replaceSubstring(string,sub,new_str);
	printf("\nThe string after replacing : %s\n",string);
	getch();
}

void replaceSubstring(char string[],char sub[],char new_str[])
{
	int stringLen,subLen,newLen;
	int i=0,j,k;
	int flag=0,start,end;
	stringLen=strlen(string);
	subLen=strlen(sub);
	newLen=strlen(new_str);

	for(i=0;i<stringLen;i++)
	{
		flag=0;
		start=i;
		for(j=0;string[i]==sub[j];j++,i++)
			if(j==subLen-1)
			flag=1;
			end=i;
			if(flag==0)
				i-=j;
			else
			{
				for(j=start;j<end;j++)
				{
					for(k=start;k<stringLen;k++)
						string[k]=string[k+1];
						stringLen--;
						i--;
				}

				for(j=start;j<start+newLen;j++)
				{
					for(k=stringLen;k>=j;k--)
					string[k+1]=string[k];
					string[j]=new_str[j-start];
					stringLen++;
					i++;
				}
			}
	}
}
