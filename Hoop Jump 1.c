#include<stdio.h>
int main ()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int count;
        scanf("%d",&n);
        count=(n/2)+1;
        printf("%d\n",count);
    }
    return 0;
}

