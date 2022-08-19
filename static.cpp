#include<iostream>
using namespace std;

quick(arr[],LB,UB)
{
    int pivot=0,nxt pvt=0,left=LB,right=UB;
    pivot=arr[left];
    while(LB<UB)
    {
        while(arr[UB]>=pivot && LB<UB)
        {
            UB=UB-1;
            if(LB!=UB)
            {
                arr[LB]=arr[UB];
            }
            else
            {
                LB=LB+1;
            }
        }

        while(arr[LB]<=pivot && LB<UB)
        {
            LB=LB+1;
            if(LB!=UB)
            {
                swap(arr[UB]=arr[LB]);
            }
            else
                break;
        }
        arr[LB]=pivot;
        nxt pvt=LB;
        LB=left;
        UB=right;
        if(LB<nxt pvt)
        {
            quick(arr,LB,nxt_pvt-1);
        }
        else
        {
            if(UB>nxt_pvt)
            {
                quick(arr,nxt_pvt+1,UB);
            }
            else
                break;
        }
    }
    int main()
    {
        int arr{6}= {4,7,3,9,5,6};
        quick(a,0,5);
        return 0;
    }
