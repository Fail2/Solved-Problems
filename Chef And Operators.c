#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("%c\n",'>');
        }
        else if(a<b)
        {
            printf("%c\n",'<');
        }
        else
        {
            printf("%c\n",'=');
        }
    }

}
