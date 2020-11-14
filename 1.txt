#include<stdio.h>  
int main()    
{ 
  int n,rev=0,sum=0,m;    
  printf("Enter a number:");    
  scanf("%d",&n);    
  while(n>0)
  {    
    m=n%10;
    rev = rev*10+m;   
    sum=sum+m;    
    n=n/10;    
  }    
  printf("Sum is=%d\n",sum);
  printf("Reverse is=%d", rev);    
  return 0;
}   