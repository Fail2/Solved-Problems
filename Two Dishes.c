//https://www.codechef.com/submit/TWODISH

#include<stdio.h>
int main()
{
    int t,n,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&n,&a,&b,&c);
        if((b>=n)&&(a+c>=n))
        {
                printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

}
