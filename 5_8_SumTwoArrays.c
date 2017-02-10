#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void sum(int *A,int N, int *B)
{
    int i,j;

    for(i=0;i<N/2;i++)
    {
        for(j=0;j<N;j+=2)
        {
            *B=*A+*(A+1);
        }
        B++;
        A+=2;
    }

}
int main()
{
    int A[10],i,B[5];

    //srand(time(NULL));

    for (i=0;i<10;i++)
    {
        A[i]=rand()%100+1;
        printf("%d ",A[i]);
    }

    sum(A,10,B);
    printf("\n");

    for (i=0;i<5;i++)
    {
        printf("%d ",B[i]);
    }

    return 0;
}
