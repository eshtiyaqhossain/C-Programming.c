#include<stdio.h>
int main()
{
    int num,reminder, sum=0 ,temp;

    printf("enter any number =");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)//(num>0)
    {
        reminder = temp % 10;
        sum = sum + reminder*reminder*reminder;
        temp = temp / 10;
    }

    printf("%d Armstrong number",sum);

    getchar();
}
