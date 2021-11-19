#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,f;
    cin>>n>>f;
    vector < pair<int , int > >a;
    int k[n],l[n];
    for(int i=0;i<n;i++)
    {
        cin>>k[i]>>l[i];
        a.push_back(pair<int,int>(min(2*k[i],l[i])-min(k[i],l[i]),i));
    }
    sort(a.rbegin(),a.rend());

    long long ans=0;
    for(int i=0;i<f;i++)
    {
        int p=a[i].second;
        ans+=min(2*k[p],l[p]);
    }
    for(int i=f;i<n;i++)
    {
        int p=a[i].second;
        ans+=min(k[p],l[p]);
    }
        cout<<ans<<endl;

    return 0;
}

