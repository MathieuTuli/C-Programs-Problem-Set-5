#include <stdio.h>
#define SIZE 101
void capt(char *w)
{
    char *next,tmp,*orig=w;
    int i;
    printf("Before: ");
    puts(w);
    if(*w>='a' && *w<='z') *w-=32;
    w++;
    next=w+1;
    for(i=0;i<SIZE-1;i++)
    {
        if(*w==' '&& *next>='a'&& *next<='z') *next-=32;
        w++;
        next++;
    }
    printf("\nAfter: ");
    puts(orig);
    return;
}

int main()
{
    char w[SIZE];

    printf("Enter a sentence that has less than 100 characters: ");
    gets(w);

    capt(w);

    return 0;
}


