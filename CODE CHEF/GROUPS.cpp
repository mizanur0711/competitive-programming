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
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                ans++;
                while(s[i]=='1')
                {
                    i++;
                }
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
