//https://www.codechef.com/submit/FLOW007

#include<stdio.h>
int main ()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,sm=0;
        scanf("%d",&n);
        for(int j=n;j>0;j)
        {

            a=j%10;
            j=j/10;
            sm=sm*10+a;

        }printf("%d\n",sm);
    }
}
