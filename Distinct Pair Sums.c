//https://www.codechef.com/submit/MANYSUMS

#include<stdio.h>
int main()
{
    int t,r,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&l,&r);
            int a=(r+r)-(l+l)+1;
            printf("%d\n",a);
    }
    return 0;
}
