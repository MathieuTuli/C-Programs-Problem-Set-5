#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void sort(int A[10])
{
    int i,j,temp;

    for (i=0;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            if(A[j-1]%2==0 && A[j]%2!=0)
            {
                temp=A[j-1];
                A[j-1]=A[j];
                A[j]=temp;
            }
        }
    }
}
int main ()
{
    int i,A[10];
    srand((unsigned)time(NULL));

    for(i=0;i<10;i++)
    {
        A[i]=rand()%100+1;
        printf("%d ",A[i]);
    }
    sort(A);
    printf("\n\nBecomes: \n\n");
    for(i=0;i<10;i++)
        printf("%d ",A[i]);
    return 0;
}
