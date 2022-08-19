#include<stdio.h>
int main ()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
       int count=0;
        scanf("%d",&n);
        while(n>0)
        {
            int a=n%10;
            n=n/10;
            if(a==4)
            {
                count++;
            }

        }
        printf("%d\n",count);
    }
    return 0;
}
