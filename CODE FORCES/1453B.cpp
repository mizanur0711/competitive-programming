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
        int n;
        cin>>n;
        vector<long long >v;
        set<long long>s;
        for(int i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
            s.insert(x);
        }
        if(s.size()==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
        int mx=*max_element(v.begin(),v.begin()+n);
        int mn=*min_element(v.begin(),v.begin()+n);
        if(s.size()==2)
        {
            cout<<mx-mn<<endl;
        }
        else if(s.size()!=n)
        {
            cout<<(n-s.size())*(mx-mn)<<endl;
        }
        else
        {
            cout<<mx-mn<<endl;
        }
        }

    }
    return 0;
}
