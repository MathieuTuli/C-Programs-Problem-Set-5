#include <stdio.h>
#define SIZE 100

void blanks(char *w)
{
    char *orig=w;
    int i,j,ascii[255]={0},point,count=0;
    printf("\n");
    puts(w);
    while(*w!='\0')
    {
        for(j=0;j<255;j++)
        {
            if(*w==j && *w!=' ' && j!=' ')
            {
                ascii[j]++;
            }
        }
        point=*w;
        if (ascii[point]>1)
        {
            *w=' ';
            count++;
        }
        w++;
    }
    w=orig;

    printf("\nBecomes: ");
    puts(orig);
    printf("\nwith %d blanks\n\n",count);

    return;
}

int main()
{
    char w[SIZE];

    printf("Enter a string less than %d characters long: ",SIZE-1);
    gets(w);

    blanks(w);

    return 0;
}
