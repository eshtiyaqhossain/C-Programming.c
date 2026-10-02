#include<stdio.h>
int main()
{
    int i,j, numOfrows,numOfcols, a[10][13];

    printf("Enter the number of rows and cols : ");
    scanf("%d %d",&numOfrows,&numOfcols);

     printf("Scaning A =\n");
    for(i=0;i<numOfrows;i++)
    {
        for(j=0;j<numOfcols;j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }



    printf("\nPrinting A =\n");
    for(i=0;i<numOfrows;i++)
    {
        printf("\t");
        for(j=0;j<numOfcols;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //Without any user input(part2).
   /* int array[3][4];

    printf("Scaning Araay :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }

    printf("Printing Array :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;*/

}
