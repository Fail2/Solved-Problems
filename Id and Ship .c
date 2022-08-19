#include<stdio.h>
int main()
{
    int t;
    char n;
    scanf("%d",&t);
    while(t--)
    {
        //scanf(" ");
        scanf(" %c",&n);
        if(n=='B' || n=='b')
        {
            printf("BattleShip\n");
        }
        else if(n=='C' || n=='c')
        {
            printf("Cruiser\n");
        }
        else if(n=='D' || n=='d')
        {
            printf("Destroyer\n");
        }
        else if(n=='F' || n=='f')
        {
            printf("Frigate\n");
        }
    }
        return 0;
}
