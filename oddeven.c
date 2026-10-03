#include<stdio.h>
int main()
{
    int a;
    printf("enter the number : ");
    scanf("%d",&a);

    if(a%2 == 0)
        printf("%d is even number ",a);
    else if(a%2 != 0)
        printf("%d is odd number",a);
    return 0;

}
//code-e scanf("%d ", &a); line-e %d er por ekta extra space ( ) dewa chilo.

/*1.scanf-e format specifier-er por space thakle,
C program aaro non-whitespace character ba ar-ekta input expect kore executable step complete korar jonno.
Ei karone program-ti 1st number input newar por pause thake ebong 2nd input/character er jonno opekkha kore*/

/*2.Ebong Line 10-e else-er por shorashori Condition (a%2 != 0) likha jay na.
else-er shathe condition likhte hole else if likhte hoy,
 othoba shudhu else likhe condition baad dite hoy.*/
