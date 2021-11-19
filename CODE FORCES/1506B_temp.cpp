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
        int ht[55];
        memset(ht,0,sizeof(ht));
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                v.push_back(i+1);
                ht[i+1]=1;
     //           cout<<i+1<<" ";
            }
        }
      //  cout<<endl;
        ht[v.front()]=2;
        ht[v.back()]=2;
       int x=v.front(),y=v.back(),ans=0;
     //  cout<<x<<" "<<y<<endl;
        for(int i=0;i<55;i++)
        {
            if(ht[i]==1 || ht[i]==2)
            {
         //       cout<<"kuluk"<<i<<" "<<endl;;
                if(i-x>k)
                {
                    int p=lower_bound(v.begin(),v.end(),i)-v.begin()-1;
                    ht[v[p]]=2;
                    x=v[p];
             //       cout<<"new add "<<x<<" ";
                }
            }
        }
        for(int i=0;i<55;i++)
        {
            if(ht[i]==2)
            {
                ans++;
            }
        }
     cout<<ans<<endl;
    }
    return 0;
}
