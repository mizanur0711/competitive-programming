#include<bits/stdc++.h>
using namespace std;
using lli=int64_t; //doest nt wrk on this current complr

int main()
{
    long long  n;
    lli cost=INT64_MAX;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=-100;i<=100;i++)
    {
        lli cc=0;
        for(int j=0;j<n;j++)
        {
            cc=cc+(arr[j]-i)*(arr[j]-i);
        }
        cost=min(cost,cc);

    }
    cout<<cost<<endl;
}
