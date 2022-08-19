//https://www.codechef.com/submit/IPCCERT

#include<stdio.h>
int main()
{
    int n,m,k,c=0;
    scanf("%d %d %d",&n,&m,&k);
    while(n--)
    {
        int t[1000],s=0,q;
        for(int i=0; i<k; i++)
        {
            scanf("%d",&t[i]);
        }
        scanf("%d",&q);
        for(int i=0; i<k; i++)
        {
          s=s+t[i];
        }
        if(s>=m&&q<=10)
        {
            c++;
        }

    }
printf("%d\n",c);
}
