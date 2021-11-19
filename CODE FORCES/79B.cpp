#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    vector< pair<int,int> >wst;
    for(int i=1;i<=k;i++)
    {
        int x,y;
        cin>>x>>y;
        wst.push_back(make_pair(x,y));
    }
    sort(wst.begin(),wst.end());
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int ind=lower_bound(wst.begin(),wst.end(),make_pair(a,b))-wst.begin();
        if(wst[ind].first==a && wst[ind].second==b)
        {
            cout<<"Waste"<<endl;
        }
        else
        {
            int ans=((a-1)*m+b-ind)%3;
            ans--;
        if(ans==0)
        {
            cout<<"Carrots"<<endl;
        }
        else if(ans==1)
        {
            cout<<"Kiwis"<<endl;
        }
        else
        {
            cout<<"Grapes"<<endl;
        }
        }
    }
    return 0;
}

