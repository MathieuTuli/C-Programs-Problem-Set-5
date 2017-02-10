#include <stdio.h>
#include <time.h>
#include <stdlib.h>
struct card//initialize the struct
{
    char facee;
    char typee;
};

int main()
{
    struct card deal,deck[52];//variable for the deck and the card dealt each time
    int i,j,hand;
    char type[13],face[4];//for looping through the deck and hand for picking a random card from deck
    //srand(time(NULL));//seed the random function
    type[0]='A';
    type[1]='2';
    type[2]='3';
    type[3]='4';
    type[4]='5';
    type[5]='6';
    type[6]='7';
    type[7]='8';
    type[8]='9';
    type[9]='T';
    type[10]='J';
    type[11]='Q';
    type[12]='K';
    face[0]='H';
    face[1]='D';
    face[2]='C';
    face[3]='S';

    for(i=0;i<4;i++)
    {
       for(j=0;j<13;j++)
       {
            deck[13*i+j].typee=type[j];
            deck[13*i +j].facee=face[i];
       }
    }
    printf("\nHow many players?: ");
    int n,k;
    scanf("%d",&n);
    printf("\nYour hand is: \n");
    for(k=0;k<n;k++)
    {
        printf("\nPlayer %d",k+1);
    for(i=0;i<5;i++)
    {
        hand=rand()%52;
        if (deck[hand].typee=='\0')
        {
            i--;
            continue;
        }
        printf("\n%c of %c\n",deck[hand].typee, deck[hand].facee);
        deck[hand].typee='\0';
    }
    }
    printf("\n\n");
    return 0;
}
