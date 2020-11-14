
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numbers[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  FILE *fptr;
  FILE *fptr2;

  fptr = fopen("odd.txt","w+");
  fptr2 = fopen("even.txt","w+");

  if((fptr == NULL) || (fptr2 == NULL))
  {
    printf("Error!");
    exit(1);
  }
  for(int i=0;i<=length;i++){
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
  return 0;
}
