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
        string s;
        cin>>s;
        int k,mx=-1;
        cin>>k;
        int arr[26];
        for(int i=0;i<26;i++)
        {
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }
        int ans=0,len=s.size();
        for(int i=0;i<len;i++)
        {
            int x=s[i]-'a';
            ans+=(i+1)*(arr[x]);
        }
        int p=len+1;
        while(p<=len+k)
        {
            ans+=p*mx;
            p++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
