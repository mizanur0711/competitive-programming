#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int >arr[100005];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x].push_back(i);
    }
    vector< pair<int,int> >ans;
    for(int i=0;i<100005;i++)
    {
        int len=arr[i].size();
        if(len==1)
        {
            ans.push_back({i,0});
        }
        else if(len==1)
        {
            ans.push_back({i,arr[i][1]-arr[i][0]});
        }
        else if(len>0)
        {
            int diff=abs(arr[i][1]-arr[i][0]);
            bool f=1;
            for(int j=0;j<len-1;j++)
            {
                if(abs(arr[i][j+1]-arr[i][j])!=diff)
                {
                    f=0;
                    break;
                }
            }
            if(f)
            {
                ans.push_back({i,diff});
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}
