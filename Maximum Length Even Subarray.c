//https://www.codechef.com/submit/MXEVNSUB

#include<stdio.h>
int main()
{
    int t,n,j;
    scanf("%d",&t);
    while(t--)
    {
        int ans=0;
        scanf("%d",&n);
        int even;
        even=n/2;
        int odd=n/2;
        if(n%2==1)odd++;
        if(odd%2==1)odd--;

        printf("%d\n",even+odd);
    }
}
