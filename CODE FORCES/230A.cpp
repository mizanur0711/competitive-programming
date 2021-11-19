#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k,n;
    vector< pair < int,int> >arr;
    cin>>k>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        arr.push_back(make_pair(x,y));
    }

    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        if(k>arr[i].first)
        {
            k=k+arr[i].second;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}

