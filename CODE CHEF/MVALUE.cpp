#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.rbegin(),arr.rend());
        long long ans1=arr[0],ans2=arr[1];
        long long fnl=ans1*ans2 + max(ans1-ans2,ans2-ans1);
        long long fnl2=arr[n-1]*arr[n-2] + max(arr[n-1]-arr[n-2],arr[n-2]-arr[n-1]);
        cout<<max(fnl,fnl2)<<endl;
    }

    return 0;
}

