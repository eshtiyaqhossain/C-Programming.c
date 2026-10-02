#include<stdio.h>
int main()
{
    int value,pos = -1, i;
    int num[]= {10,30,20,40,50,60,70};

    printf("enter the value you want to search = ");
    scanf("%d", &value);


    for(i=0;i<7;i++)
    {
        if(value == num[i])
    {
        pos = i +1;
        break;
    }
    }


    if( pos ==  -1)
    {
        printf("Item is not found");
    }
    else
    {
        printf("the value is found at position %d",pos);
    }

    return 0;

}
