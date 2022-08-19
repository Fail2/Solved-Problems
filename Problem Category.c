//https://www.codechef.com/LP1TO201/problems/PROBCAT

#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&x);
       if(1<=x&&x<100)
       {
           printf("Easy\n");
       }
       else if(100<=x&&x<200)
       {
           printf("Medium\n");
       }
       else
       {
           printf("Hard\n");
       }
    }

}
