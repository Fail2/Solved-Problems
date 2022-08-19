//https://www.codechef.com/submit/VDATES

#include<stdio.h>
int main()
{
    int t,d,l,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&d,&l,&r);
        if(d>=l&&d<=r)
        {
            printf("Take second dose now\n");
        }
        else if(d>l&&d>r)
        {
            printf("Too Late\n");
        }
        else
        {
            printf("Too Early\n");
        }
    }
}
