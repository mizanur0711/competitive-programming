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
        //not done
        int n;
        cin>>n;
        vector< pair <int,int> >v;
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
            v[i].second++;
        }
        for(auto x:v)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
    return 0;
}
