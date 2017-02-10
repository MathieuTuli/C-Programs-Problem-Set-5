#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void maxm(int *A,int N,int* max);
int main()
{
    int A[10],i,max=0;
    //srand(time(NULL));

    for (i=0;i<10;i++)
    {
        A[i]=rand()%100+1;
        printf("%d ",A[i]);
    }
    maxm(A,10,&max);
    printf("The max value is %d",max);
}
void maxm(int *A,int N,int *max)
{
    int *B=A;
    int *m=max;
    int *C;

    C=B;
    B++;

    while (B-C<N)
    {
        if(*B>*m) *m=*B;
        B++;
    }

    return;
}
