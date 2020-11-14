#include <stdio.h>
#include <stdlib.h>
int main()
{
  char special_characters[100] = "@!#$%^&*()<>?/|}{~:'}";
  int count = 0, i, j;
  char string[100];
  printf("Enter the string >>>");
  gets(string);

  for(i=0;string[i] != '\0'; i++){
    for(j=0;j<=special_characters[j]!='\0';j++){
      if(string[i] == special_characters[j]){
        count ++;
      }
    }
  }
  printf("%d", count);
  return 0;
}
