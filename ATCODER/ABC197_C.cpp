#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int n;
        cin>>n;
        long long int ans=0;
        vector<long long int >v(n),arr;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        //sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            while(v[i]<v[i+1] && i<n-1)
            {
                ans=ans | v[i];
                i++;
            }
                v.push_back(ans);
                ans=0;
        }
        for(auto x:v)
        {
            ans=ans ^ x;
        }
        cout<<ans<<endl;
    }
    return 0;
}
