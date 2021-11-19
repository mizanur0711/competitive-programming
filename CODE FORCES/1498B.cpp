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
        int n,w,sum=0;
        cin>>n>>w;
        long long arr[n];
        unordered_map<int, int> m;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
            m[arr[i]]++;
        }
        if(sum<=w)
        {
            cout<<"1"<<endl;
        }
        else
        {
            long long ans = 0;
        for (auto x : m)
        {
            if (x.second > ans)
            {
                ans = x.second;
            }
        }
        cout << ans << endl;
        }
    }
    return 0;
}
