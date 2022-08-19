//https://www.codechef.com/submit/CHFRICH

#include<stdio.h>
int main()
{
    int t,a,b,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&x);
        int m=(b-a)/x;
        printf("%d\n",m);
    }
}
