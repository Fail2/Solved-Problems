#include<stdio.h>
int main()
{
    int t,n,a,b;
    scanf("%d",&t);
    int min=100000000;
    int sum=0;
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        int b[n];
        while(n--)
        {
            scanf("%d",&a[n]);
            scanf("%d",&b[n]);
            if(a[n-1]-b[n]==0)
            {
                int t=a[n-1];
                a[n-1]=b[n];
                b[n]=t;
            }
        }
while(n--)
{
    sum=abs(sum+a[n]-a[n+1])

}
    }
}
