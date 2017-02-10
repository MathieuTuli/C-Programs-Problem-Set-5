#include <stdio.h>
#define SIZE 10
#include <stdlib.h>
#include <time.h>

void average (int A[SIZE])
{
    int i,j;

    double sum,n;

    printf("\n\nEnter the rolling average: ");
    scanf("%lf",&n);

    printf("\n\nThe averages are: \n\n");
    for (i=0;i<SIZE-n+1;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=A[i+j];
        }
        printf("%.2f ",(sum/n));
    }
    printf("\n\n");
    return;
}
int main()
{
    int A[SIZE],i;
    //srand(time(NULL));
    for(i=0;i<SIZE;i++)
    {
        A[i]=rand()%100+1;
        printf("%d ",A[i]);
    }

    average(A);

    return 0;
}
