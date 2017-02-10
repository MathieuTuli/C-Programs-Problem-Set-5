#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap (char *c,char a, char b)
{
    int i=0,j=0;

    while(i<99)
    {
        if (*c==a)
            *c=b;
        c++;
        i++;
    }
    return;
}

int main ()
{
    int i=0,j=0;
    char word[100],a,b,c;

    printf("Enter a string: ");
    while(i<99 && (c=getchar())!='\n')
    {
        word[i]=c;
        i++;
    }
    word[i]='\0';
    fflush(stdin);

    printf("Enter a letter to swap: ");
    a=getchar();
    fflush(stdin);
    printf("Enter a letter to replace it with: ");
    b=getchar();
    getchar();
    swap(word,a,b);
    printf("Modified: ");
    puts(word);
    return 0;
}
