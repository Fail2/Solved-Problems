#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        int a[n];
        int ans=0,sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
            if((sum==m)&&(i==m-1))
            {
                ans=k;
            }

            else if(sum==n)
            {
                ans=100;
            }

        }
        printf("%d\n",ans);
    }
}
