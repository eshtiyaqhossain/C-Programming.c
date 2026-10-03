#include<stdio.h>
int main(){
    int grade;

    printf("enter a grade (0-4):");
    scanf("%d",&grade);

    if(grade ==4)
        printf("excellent");
    else if(grade ==3)
        printf("good");
    else if(grade ==2)
        printf("average");
    else if(grade ==1)
        printf("poor");
    else if(grade ==0)
        printf("failing");
    else
        printf("illegal");



    return 0;
}
