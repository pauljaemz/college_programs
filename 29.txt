#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y);
 
void main () {
   int a = 100;
   int b = 200;
   clrscr();
 
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );

   swap(&a, &b);

   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );
 
   getch();
}
void swap(int *x, int *y) {

   int temp;
   temp = *x;    
   *x = *y; 
   *y = temp;    
}