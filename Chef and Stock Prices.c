//https://www.codechef.com/submit/CSTOCK

#include<stdio.h>
int main()
{
    int t,s,a,b,c,d;
    float m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&s,&a,&b,&c);
        m=((100+c)/100.00)*s;

        //printf("%f\n",m);
        if(m<a||m>b)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
}
