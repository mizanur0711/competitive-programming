#include<bits/stdc++.h>
using namespace std;
vector<pair<int ,long long > > box;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long ans=0,sum=0;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        box.push_back({y,x});

    }
    sort(box.rbegin(),box.rend());
    for(int i=0;i<m;i++)
    {
        if(ans+box[i].second<=n)
        {
            sum=sum+box[i].first*box[i].second;
            n=n-box[i].second;
        }
        else
        {
            sum=sum+n*box[i].first;
            n=0;
        }
    }
    cout<<sum<<endl;
}
