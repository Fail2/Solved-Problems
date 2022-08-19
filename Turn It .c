//https://www.codechef.com/submit/NFS

#include<stdio.h>
#include<math.h>
int main()
{
    int t,u,v,a,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&u,&v,&a,&s);
        {
            int b=((u*u)-(2*a*s));
            //printf("%f",b);
            if(v*v>=b)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
}
