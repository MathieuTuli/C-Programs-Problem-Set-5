#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *A,N,x,y,range,i;//declare pointer for memory, N for size, x and y for range
    srand(time(NULL));//seed the random function a new time
    printf("Enter a size: ");
    scanf("%d",&N);
    do
    {
        printf("\nRange: ");
        scanf("%d %d", &x, &y);//ask user for them
    }while(abs(y-x+1)<N);//make sure it can hold the range

    range=y-x+1; //set range
    if(range<0) //if they enter values in reverse order, just switch
    {
        range*=-1;
        x=y;
    }

    A=(int *)malloc(range*sizeof(int));//make the memory size of the range to ensure that it can hold enough ints
    for(i=0;i<range;i++)
        *(A+i)=0;//initialize all values to 0
    for(i=0;i<N;i++)
    {
        y=(rand()%range);//add the low end of the range plus range
        if(*(A+y))//check if 1 or 0. if 0, you're good
            {
                i--;
                continue;
            }
        *(A+y)=1;//set to 1 so you know there's a number there
        printf("%3d",y+x);
    }

    free(A);
    A=NULL;
    return 0;
}
