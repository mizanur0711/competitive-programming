#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> ans(n);
    cin>>ans[0];
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        ans[i]=ans[i-1]+x;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        auto fin=lower_bound(ans.begin(),ans.end(),y);
        cout<<fin-ans.begin()+1<<endl;
    }
    return 0;
}
