#include <stdio.h>
#define SIZE 100

void blanks(char *w)
{
    char *orig=w,tmp,*m;
    char neww[SIZE];
    int i,j,multiple,count=0,k;//i j for loops. ascii for characters. count for how many blanks, count2 for how many characters. flag for if, k for neww

    printf("\n");
    puts(w);

    for(i=0;i<256;i++)
    {
        if(i==' ') continue;
        j=0;
        multiple=0;
        while(*(w+j)!='\0')
        {
            if(*(w+j)==i)
            {
                if(multiple==1)
                {
                    k=j;
                    do
                    {
                        *(w+k)=*(w+k+1);
                        k++;
                    } while(*(w+k-1)!='\0');
                    count++;
                }
                else multiple=1;
            }
            j++;
        }
    }

    //my way below could work, just dont think about deleting all spaces to make it. just delete the letter, don't worry about spaces already there.

    /*w=orig;
    while(k!=(count2-count+1))
    {
        if (*(w-1)==' '&&*w==' ')
            flag=1;
        else if(*(w-1)!=' '&&*w==' ')
            flag=0;
        if (*w==' '&&flag==0)
        {
            neww[k]=*w;
            k++;
            flag=0;
        }
        else if (*w!=' ')
        {
            neww[k]=*w;
            k++;
        }
        w++;

    }*/

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
