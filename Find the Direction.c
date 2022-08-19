//https://www.codechef.com/problems/FACEDIR

#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a=n%4;
        if(a==0)
        {
            printf("North\n");
        }
        else if(a==1)
        {
            printf("East\n");
        }
        else if(a==2)
        {
            printf("South\n");
        }
        else if(a==3)
        {
            printf("West\n");
        }
    }
    return 0;
}
