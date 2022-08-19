//https://www.codechef.com/submit/VACCINQ

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,p,x,y;
        int a[100],s=0;
        scanf("%d %d %d %d",&n,&p,&x,&y);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0; i<p; i++)
        {
            if(a[i]==1)
            {
                s=s+y;
            }

            if(a[i]==0)
            {
                s=s+x;
            }
        }
        printf("%d\n",s);
    }

}
