#include<stdio.h>
int main()
{
    int n;
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    scanf("%d",&n);
    int low=0,high=9,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==n)
        {
            printf("%d",mid+1);
            break;
        }


        else if(arr[mid]<n)
        {
            low=mid+1;
        }
        else if(arr[mid]>n)
        {
            high=mid-1;
        }
    }
}
