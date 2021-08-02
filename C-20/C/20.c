#include <stdio.h>
#include <conio.h>
#define SIZE 6

void main()
{
int amount, notes;
int denominations[SIZE] = {500, 100, 50, 20, 10, 1}; 
clrscr();
printf("Enter amount: "); 
scanf("%d", &amount); 
printf("\n");
 for (int i = 0; i < SIZE; i++)
 { 
notes = amount / denominations[i]; 
if (notes) 
{
amount=amount % denominations[i];
printf("%d * %d = %d \n", notes, denominations[i], notes * denominations[i]);
} 
} 
getch(); 
}