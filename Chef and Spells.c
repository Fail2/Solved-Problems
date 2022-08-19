//https://www.codechef.com/submit/CHFSPL

#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        int max;
        scanf("%d %d %d",&a,&b,&c);
        int m=a+b;
        int n=a+c;
        int o=b+c;
        if(m>n)
        {
            if(m>o)
            {
                max=m;
            }
            else
            {
                max=o;
            }
        }
        else
        {
            if(n>o)
            {
                max=n;
            }
            else
            {
                max=o;
            }
        }
        printf("%d\n",max);

    }
    return 0;
}
