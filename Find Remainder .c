#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b,r;
        scanf("%d %d",&a,&b);
        r=a%b;
        printf("%d\n",r);
    }
    return 0;
}
