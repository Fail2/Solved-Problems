//https://www.codechef.com/submit/MANYSUMS

#include<bits/stdc++.h>
using namespace std;
const int N=1e6+18;
long long arr[N];
int main()
{
    long long t,r,l;
    arr[1]=1;
    for(long long i=2;i<=N-17;i++)
    {
        arr[i]=i+arr[i-1];
    }
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&l,&r);
            long long s=0;
            long long a=(r-l)+1;
            printf("%ld\n",arr[a]);
    }
    return 0;
}
