#include<stdio.h>
int main()
{
    int t,a,b,c,d,k;
    scanf("%d",&t);
    while(t--)
    {
        int ans;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
        int m=a+b;
        int n=c+d;
        if(a==c&&b==d)
        {
            if(k==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if(n>m)
        {
            ans=n-m;
            if(ans==k)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");

        }
        else if(n<=m)
        {
            ans=n+m;
            if(ans==k)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
    }
}
