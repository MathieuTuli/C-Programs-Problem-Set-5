#include <stdio.h>

void noBlanks(char *a)
{
    char *b=a,*c=a;
    if(*b>='a'&&*b<='z')
                *b+='A'-'a';
    while(*b!='\0')
    {
        if(*b==' ')
        {
            while (*b==' ')
            {
                while(*c!='\0')
                {
                    *c=*(c+1);
                    c++;
                }
                *(c-1)='\0';
                if(*b>='a'&&*b<='z')
                    *b+='A'-'a';
                c=b;
            }
        }
        b++;
        c=b;
    }
    return;
}
int main()
{
    char a[101];
    printf("Enter a string with blanks: ");
    gets(a);
    noBlanks(a);
    puts(a);

    return 0;
}
