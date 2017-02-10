#include <stdio.h>
#define SIZE 4

void print(int A[SIZE][SIZE]);
void TLBR(int A[SIZE][SIZE]);
void BLTR(int A[SIZE][SIZE]);//initialize them all

int main()
{
    int A[SIZE][SIZE],i,j,num=1;//initialize array

    for(i=0;i<SIZE;i++)//assign numbers and print initial array
    {
        for (j=0;j<SIZE;j++)
        {
            A[i][j]=num;
            num+=1;
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");//call functions
    TLBR(A);
    print(A);
    BLTR(A);
    print(A);
    TLBR(A);
    print(A);
    BLTR(A);
    print(A);

    return 0;
}
void print(int A[SIZE][SIZE])//print array
{
    int i,j;
    for (i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }
    return ;
}
void BLTR(int A[SIZE][SIZE])//flip across bottom left to top right DIAGONAL
{
    int i,j,tmp;

    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE-i;j++)//to not re flip numbers. this follows along the diagonal
        {
            tmp=A[SIZE-j-1][SIZE-i-1];
            A[SIZE-j-1][SIZE-i-1]=A[i][j];
            A[i][j]=tmp;
       }
    }
    printf("\n");
    return;
}
void TLBR(int A[SIZE][SIZE])//flip across top left to bottom right DIAGONAL
{
    int i,j,tmp;

    for(i=1;i<SIZE;i++)
    {
        for(j=0;j<i;j++)
        {
            tmp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=tmp;
        }
    }
    printf("\n");
    return;
}
