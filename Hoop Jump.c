#include<stdio.h>
int main ()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int count=0,i=0;
        scanf("%d",&n);
        //while(n>=0)
        for(int i=1; i<=n; i++)
        {
            n=n-1;
            count++;
            if(i==n)
            {
                break;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
