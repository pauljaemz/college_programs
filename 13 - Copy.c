#include<stdio.h>
#include<math.h>

struct P{
  float exp;
  float base; 
};
union R{
  float final;
};
int main(){
  struct P result;
  union R power;
  printf("Enter the base number >>>");
  scanf("%f", &result.base);
  printf("Enter the exponent number >>>");
  scanf("%f", &result.exp);
  power.final = pow(result.base, result.exp);
  printf("%.1lf^%.1lf = %.2lf", result.base, result.exp, power.final);
  return 0;
}