//https://www.codechef.com/submit/FLOW006

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=t; i>0; i--)
    {
        int a,j,b;
        scanf("%d",&a);
        for(j=a; j>0; j)
        {
            b=j%10;
            j=j/10;
                printf("%d",b);


        }
printf("\n");
    }
}
