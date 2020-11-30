//source : https://www.programiz.com/c-programming/c-file-input-output

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
   int num;
   FILE *fptr;
   clrscr();

   fptr = fopen("C:\\TURBOC3\\Projects\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   if ((fptr = fopen("C:\\TURBOC3\\Projects\\program.txt","r")) == NULL){
       printf("Error! opening file");

       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr);
   getch();
}