//https://www.codechef.com/submit/MXEVNSUB

#include<stdio.h>
int main()
{
    int t,n,j;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&n);
        int s=(n*(n+1))/2;
            if(s%2)
            {
                printf("%d\n",n-1);
            }

            else
                printf("%d\n",n);

        }

    }

