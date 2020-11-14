#includestdio.h
void swapped(int n1,int n2);
int main()
{
    int num1,num2;

    printf(Enter the first number );
    scanf(%d,&num1);
    printf(Enter the second number );
    scanf(%d,&num2);
    printf(Before swapping  %d ,%d,num1,num2);
    swapped(&num1,&num2);

    printf(After swapping  %d ,%d,num1,num2);
    return 0;
}
void swapped(int n1,int n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
