//https://www.codechef.com/submit/FLOW004

#include<stdio.h>
int main()
{
    int t,n,r,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a=n%10;
        while(n>0)
        {
            r=n%10;
            n=n/10;
        }
        printf("%d\n",a+r);
    }
    return 0;
}
