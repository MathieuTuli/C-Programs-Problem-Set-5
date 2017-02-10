#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int *a,int *b, int *c)
{
    int tmp;

        if(*a>*b)
        {
            tmp=*b;
            *b=*a;
            *a=tmp;
        }
        if(*b>*c)
        {
            tmp=*c;
            *c=*b;
            *b=tmp;
        }
        if(*a>*b)
        {
            tmp=*b;
            *b=*a;
            *a=tmp;
        }

    return;
}

int main()
{
    int a,b,c;

    printf("Enter three different integers: ");
    scanf("%d%d%d",&a,&b,&c);

    sort(&a,&b,&c);

    printf("sorted: %d %d %d",a,b,c);
}
