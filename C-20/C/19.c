#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(){
  float amount, converted_amount;
  
  int option;
  clrscr();
  printf("Enter the amount in Rupees >>>");
  scanf("%f", &amount);
  printf("1. U.S. Dollar (USD)\n2. Japanese Yen (JPY)\n3. British Pound (GBP)\n4. Canadian Dollar (CAD)");
  scanf("%d", &option);
  if(option == 1){
    converted_amount = amount / 74.64;
    printf("%.2f in Dollar is %.2f", amount, converted_amount);
  }
  else if(option == 2){
    converted_amount = amount / .71;
    printf("%.2f in Yen is %.2f", amount, converted_amount);
  }
  else if(option == 3){
    converted_amount = amount / 98.24;
    printf("%.2f in Pound is %.2f", amount, converted_amount);
  }
  else if(option == 4){
    converted_amount = amount / 56.79;
    printf("%.2f in Canadian Dollar is %.2f", amount, converted_amount);
  }
  else{
    printf("\nEnter the correct option.");
  }
  getch();
}