#include<stdio.h>
int fun(int a[],int n)
{
    while(n--)
    {
        scanf("%d",a[n]);
    }
    if(a[n]==1)
        return 1;
    else
        return fun(a,n);
}

int main()
{
    int n;
    int arr[n];
    scanf("%d",&n);

    printf("%d",fun(arr,n));
}
