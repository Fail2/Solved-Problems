#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("%d\n",b);
        }
       else if(b>a)
        {
            int x=b-a;
            int ans=a-x;
            printf("%d\n",ans);
        }
        else if(a==b)
        {
            printf("%d\n",a);
        }

    }
}
