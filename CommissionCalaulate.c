#include<stdio.h>
int main(){
   float c,v;

   printf("enter the value of trade:");
   scanf("%f",&v);

   if(v<2500.00f)
    c=30.00f+.017*v;
   else if(v<6250.00f)
    c=56.00f+0.66f*v;
    else if(v<20000.00f)
    c=76.00f+0.0034f*v;
    else if(v<50000.00f)
    c=100.00f+0.0022f*v;
    else if(v<500000.00f)
    c=155.00f+0.0011f*v;
   else
    c=255.00f+.0009*v;

   if(c<39.00f)
    c=39.00f;

   printf("commission: $%.2f\n",c);

   return 0;
}
