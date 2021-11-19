#include<bits/stdc++.h>
using namespace std;
bool c(pair<int,int> &a,pair<int,int> &b)
{
    if(a.first!=b.first)
    {
    return a.first>b.first;
    }
    else
    {
        return a.second<b.second;
    }
}
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
        vector< pair<int,int> >v(n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v[i].first=x;
            v[i].second=i+1;
        }
        sort(v.begin(),v.end(),c);
        for(int i=0;i<n;i++)
        {
            arr[v[i].second-1]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

