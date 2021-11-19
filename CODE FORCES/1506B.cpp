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
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        vector<int> v;
       // int ht[55];
       // memset(ht,0,sizeof(ht));
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                v.push_back(i+1);
           //     ht[i+1]=1;
            }
        }
      //  ht[v.front()]=2;
       // ht[v.back()]=2;
       int x=v.front(),ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(i==0 || i==v.size()-1)
            {
                ans++;
            }
            if(v[i]-x>k)
            {
                ans++;
                x=v[i];
            }
        }
     cout<<ans<<endl;
    }
    return 0;
}
