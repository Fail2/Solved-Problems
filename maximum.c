#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
    }
    printf("%d\n",max);
}
