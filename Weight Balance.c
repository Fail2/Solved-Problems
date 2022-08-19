#include<stdio.h>
int main()
{
    int t,a,b,c,d,e;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        int m,n,o,p;
        m=b-a;
        n=c*e;
        o=d*e;

        if((m>o)||(m<n))
        {
            printf("%d\n",0);
        }
        else
        {
            printf("%d\n",1);
        }
    }
}
