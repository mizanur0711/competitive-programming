#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
     int n,m,k;
     cin>>n>>m>>k;
     vector<int>req(n);
     set<int>ava;
     for(int i=0;i<n;i++)
     {
         cin>>req[i];
     }
     for(int i=0;i<m;i++)
     {
         int x;
         cin>>x;
         ava.insert(x);
     }
     sort(req.begin(),req.end());
     //sort(ava.begin(),ava.end());
     set<int>::iterator it;
     int c=0;
     for(int i=0;i<n;i++)
     {
         auto it=lower_bound(ava.begin(),ava.end(),req[i])-ava.begin();
         if(req[i]>=ava[it]-k && req[i]<=ava[it]+k)
         {
             c++;
             ava.erase(it);
         }
     }
     cout<<c<<endl;
    }
    return 0;
}
