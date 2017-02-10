#include <stdio.h>

void ASCII_order(char *string);

int main()
{
    char string[101];

    printf("Enter a string less than 100 characters: ");
    gets(string);

    ASCII_order(string);

    printf("\nThe new string is: %s",string);

    return 0;
}

void ASCII_order(char *string)
{
    int i,j,count=0;
    char *orig=string,temp;

    while (*string!='\0')
    {
        count++;
        string++;
    }
    string=orig;
    for(i=0;i<count-1;i++)
    {
        string=orig;
        for(j=0;j<count-1;j++)
        {
            if(*string>=*(string+1))
            {
                temp=*(string+1);
                *(string+1)=*(string);
                *(string)=temp;
            }
            string++;
        }
    }

    /*OR
     for(i=0;i<256;i++)
    {
        n=orig;
        while(*n!='\0')
        {
            if(*n==i)
            {
                temp=*orig;
                *orig=*n;
                *n=temp;
                orig++;
            }
            n++;
        }
    }*/

    return;
}

