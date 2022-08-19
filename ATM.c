https://www.codechef.com/submit/HS08TEST

#include<stdio.h>
int main()
{
    int a;
    float b;
    scanf("%d %f",&a,&b);
    if(a%5==0)
    {
        if(a<b)
        {
            float ans=b-a-0.5;
            printf("%.2f",ans);
        }
        else
            printf("%.2f",b);

    }
    else
    {
        printf("%.2f",b);
    }
    return 0;
}
