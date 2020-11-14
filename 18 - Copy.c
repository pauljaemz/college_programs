#include <stdio.h>
#include <string.h>
int main(){
  char a[100];
  char b[100];
  int i=0;
  printf("Enter the string >>>");
  gets(a);
  b[0] = a[0];
  b[1] = ' ';
  for(i=0;i<strlen(a);i++){
    if(a[i] == ' '){
      b[1] = a[i+1];
      break;
    }
  }
  printf("%c.%c", b[0], b[1]);
return 0;
}