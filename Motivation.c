#include<stdio.h>
int main()
{
    int t,n,x,s,r;
    scanf("%d",&t);
    while(t--)
    {
        int max=0;
        scanf("%d %d",&n,&x);
        while(n--)
        {
            scanf("%d %d",&s,&r);
            if(x>=s)
            {
                if(r>max)
                {
                    max=r;
                }
            }
        }
        printf("%d\n",max);
    }
}

