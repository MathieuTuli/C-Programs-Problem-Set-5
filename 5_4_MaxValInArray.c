#include <stdio.h>
#define n 10

int max(int *A,int N)
{
    int max=*A;
    int *B;

    B=A;
    A++;
    while(A-B<N)
    {
        if(*A>max) max=*A;
        A++;
    }
    return max;
}

int main()
{
    int A[n],i;
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        A[i]=rand()%100+1;
        printf("%d ",A[i]);
    }

    printf("\nThe max value in the array is %d\n",max(A,n));
    return 0;
}
