
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
  int numbers[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}, i;
  int length = sizeof(numbers) / sizeof(numbers[0]);
  FILE *fptr;
  FILE *fptr2;
  clrscr();

  fptr = fopen("C:\\TURBOC3\\Projects\\odd.txt","w+");
  fptr2 = fopen("C:\\TURBOC3\\Projects\\even.txt","w+");

  if((fptr == NULL) || (fptr2 == NULL))
  {
    printf("Error!");
    exit(1);
  }
  for(i=0;i<=length;i++){
    if(numbers[i] % 2 == 0)
    {
      fprintf(fptr,"%d, ",numbers[i]);
    }
    else{
      fprintf(fptr2,"%d, ",numbers[i]);
    }
  }
  fclose(fptr);
  fclose(fptr2);
  printf("Files are written to C:\\TURBOC3\\Projects and Files are closed");
  getch();
}
