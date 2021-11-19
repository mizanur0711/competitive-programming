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
        int ans=1;
        for(int i=0;i<s.size();i++)
        {
            int c=1;
            if(s[i]==s[i+1])
            {
                while(s[i]==s[i+1])
                {
                    c++;
                    i++;
                }
                ans=max(c,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
