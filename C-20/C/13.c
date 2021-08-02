#include<stdio.h>
#include<math.h>
#include<conio.h>

struct P{
  float exp;
  float base; 
};
union R{
  float final;
};
void main(){
  struct P result;
  union R power;
  clrscr();
  printf("Enter the base number >>>");
  scanf("%f", &result.base);
  printf("Enter the exponent number >>>");
  scanf("%f", &result.exp);
  power.final = pow(result.base, result.exp);
  printf("%.1lf^%.1lf = %.2lf", result.base, result.exp, power.final);
  getch();
}