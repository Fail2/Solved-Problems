#include<stdio.h>
int main ()
{
    int t,a,b,c,d,e,f;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        if((a==c||a==d)&&(b==c||b==d))
        {
            printf("1\n");
        }


        else if((a==e||a==f)&&(b==e||b==f))
        {
            printf("2\n");
        }

        else
        {
            printf("0\n");
        }
    }
    return 0;
}
