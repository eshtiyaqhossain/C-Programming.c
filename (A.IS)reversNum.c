#include<stdio.h>
int main()
{
    int sum=0, num, temp, reminder;

    printf("enter the number = ");
    scanf("%d",&num);

    temp = num;


    while( temp != 0)
    {
      reminder = temp%10;
      sum = sum * 10 + reminder;
      temp = temp/10;
    }

    printf("revers number = %d ", sum);


    getchar();
}
