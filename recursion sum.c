#include<stdio.h>
int sum(int x)
{
    int s=0;
    if(x==1)
        return 1;
    s=x+sum(x-1);
    //
    return s;
    printf("%d\n",s);
}
int main()
{
   int a;
   scanf("%d",&a);
  int b= sum(a);
  printf("%d",b);
}
