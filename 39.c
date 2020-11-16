#include <stdio.h>
#include <conio.h>

struct time{
  int tfhour;
  int tfseconds;
  int twhour;
};

void main ()
{
  struct time Time;
  clrscr();
  printf("Enter a 24-hour time (ex. 10:23): ");
  scanf("%d:%d", &Time.tfhour, &Time.tfseconds);

  if (Time.tfseconds > 60 || Time.tfseconds < 0)
  {
    printf("Not a valid seconds time!\n");
    return 0;
  }
  
  if (Time.tfhour <= 12 && Time.tfhour >= 0)
  {
    printf("Equivalent 12-hour time: %d:%.2d AM\n", Time.tfhour, Time.tfseconds);
  }                                                         
  else if (Time.tfhour >= 13 && Time.tfhour <= 24)
  {
    Time.twhour = (Time.tfhour - 12);
    printf("Equivalent 12-hour time: %d:%d PM\n", Time.twhour, Time.tfseconds);
  }
  else
  {
    printf("Not a valid hour!\n");
  }
getch();
}