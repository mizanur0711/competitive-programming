#include<bits/stdc++.h>
using namespace std;
int ht[26];
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
        int len=s.size();
        memset(ht,0,sizeof(ht));
        for(int i=0;i<len;i++)
        {
            ht[s[i]-'A']++;
        }
            char c;
            int flag=0;
            for(int i=0;i<26;i++)
            {
                int x=ht[i];
                if(x%2==1)
                {
                    if(flag==0)
                    {
                        c=char('A'+i);
                        flag=1;
                    }
                    else
                    {
                        flag=2;
                    }
                }
                if(flag==2)
                {
                    cout<<"NO SOLUTION"<<endl;
                    return 0;
                }
            }
            string ans="";
            for(int i=0;i<26;i++)
            {
                int p=ht[i];
                p/=2;
                while(p--)
                {
                    ans+=char('A'+i);
                }
            }
            cout<<ans;
            if(c>='A' && c<='Z')
            {
                cout<<c;
            }
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;

    }
    return 0;
}
