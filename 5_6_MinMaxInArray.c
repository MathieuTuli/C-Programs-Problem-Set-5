#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void min_max(int A[],int N, int *min, int *max);
int main()
{
    int A[10],i,min,max;
    //srand(time(NULL));
    for (i=0;i<10;i++)
    {
        A[i]=rand()%100+1;
        printf("%d ",A[i]);
    }
    min_max(A,10,&min,&max);
    printf("\n\nThe min is %d and the max is %d\n\n",min,max);

    return 0;
}
void min_max(int A[],int N, int *min, int *max)
{
    int *B=A;
    int *C=B;
    *min=*C;
    *max=*C;
    B++;

    while (B-C<N)
    {
        if (*B>*max) *max=*B;
        if (*B<*min) *min=*B;
        B++;
    }

    return;
}

