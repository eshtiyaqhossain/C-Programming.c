#include<stdio.h>
int main()
{
    int i,j,r1,r2,c1,c2,k,sum;
    int first[30][30],second[30][30],result[30][30];

    printf("enter rows and colume for first Matrix = ");
    scanf("%d %d",&r1,&c1);

    printf("enter rows and colume for second Matrix = ");
    scanf("%d %d",&r2,&c2);

    //Validation: first matrix er column r second matrix-er Row soman hote hobe
    while(c1!= r2)
    {
        printf("\nerror !! colume of first matrix not equal to row of second matrix.\n");

        printf("enter rows and colume for first Matrix = ");
        scanf("%d %d",&r1,&c1);

        printf("enter rows and colume for second Matrix = ");
        scanf("%d %d",&r2,&c2);
    }

    //taking input of first matrix
    printf("\n enter element for first matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("first[%d] [%d] = ", i, j);
            scanf("%d",&first[i][j]);
        }

    }


    //taking input for second matrix.
    printf("Enter element for second matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("second[%d] [%d] = ", i, j);
            scanf("%d", &second[i][j]);
        }

    }


    //Multipling Matrix A and B
    printf("A*B = \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            int sum = 0;
            for(k=0;k<c1;k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j]= sum;

        }
    }


      //printing first matrix.
    printf("\nFirst matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",first[i][j]);
        }
        printf("\n");
    }


        //Printing second matrix.
    printf("Second matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",second[i] [j]);
        }
        printf("\n");
    }


        //printing result matrix.
    printf("\nResult matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;

}
