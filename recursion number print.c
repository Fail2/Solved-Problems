#include<stdio.h>
int bro(int a)
{
    if(a<1)
    {
        return 1;
    }

    else
    {
        //printf("%d\n",a);
        bro(a-1);
        printf("%d\n",a);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    bro(n);
}
