#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void shift(int A[10])
{
    int x,i,j,tmp,B[10];

    printf("\n\nEnter an amount to shift by: ");
    scanf("%d",&x);

    for (j=0;j<x;j++)
    {
        for (i=0;i<10;i++)
        {
            if(i<=9 &&i>=9-x+1)
            {
                B[abs((10-x)-i)]=A[i];
            }
            else
            {
                B[i+x]=A[i];
            }
        }
    }
    printf("\n\nShifted array is: \n\n");
    for(i=0;i<10;i++)
        {
            printf("%d ",B[i]);
        }
    printf("\n\n");

    return;
}

 int main()
 {
     srand(time(NULL));

     int A[10],i;

     for(i=0;i<10;i++)
     {
        A[i]=rand()%10;
        printf("%d ",A[i]);
     }

     shift(A);

     return 0;
 }
