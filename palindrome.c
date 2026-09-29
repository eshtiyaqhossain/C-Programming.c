#include<stdio.h>
int main()
{
    int num, sum=0,reminder,temp;

    printf("enter the number =");
    scanf("%d",&num);


    temp= num;

    while(temp != 0)
    {
        reminder = temp % 10;
        sum = sum*10 + reminder;
        temp = temp / 10;
    }

    if(num == sum)
       {

        printf("Palingdrome number");
       }
    else{
        printf("Not palindrome number");
    }

    return 0;


}
