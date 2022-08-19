//https://www.codechef.com/submit/BALLOON

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n+1];
        int ans=7,count=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);

        }
        int anss=7;
        for(int i=1; i<=n; i++)
        {
            if(a[i]<=7)
            {
                ans--;
            }
            if(ans==0){
                anss=i;
                break;
            }
        }
        printf("%d\n",anss);

    }

}
