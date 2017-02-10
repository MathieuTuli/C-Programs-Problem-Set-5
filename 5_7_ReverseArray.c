#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void reverse(int *A,int n)
{
    int *B=A;
    int *C=A+n-1;
    int tmp,i;

    for (i=0;i<n/2;i++)
    {
        tmp=*B;
        *B=*C;
        *C=tmp;
        B++;
        C--;
    }
    printf("\n\nReversed\n\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }

    return;
}
int main()
{
    int A[SIZE],i;
    //srand(time(NULL));

    for (i=0;i<SIZE;i++)
    {
        A[i]=rand()%100+1;
        printf("%d ",A[i]);
    }

    reverse(A,SIZE);

    return 0;
}
