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
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int n=s.size();
        int flag=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                a--;
            }
            else if(s[i]=='1')
            {
                b--;
            }
        }
        int i,j;
        for(i=0,j=n-1;i<=j;i++,j--)
        {
            if(s[i]==s[j] && s[i]!='?')
            {
                continue;
            }
            if(i==j && s[i]=='?')
            {
                if(a>0)
                {
                    s[i]='0';
                    a--;
                }
                else if(b>0)
                {
                    s[i]='1';
                    b--;
                }
                else
                    {
                        flag=0;
                        cout<<"-1"<<endl;
                        break;
                    }
            }
            else if(s[i]!=s[j] && (s[i]=='?' || s[j]=='?'))
            {
                if(s[i]=='0' && a>0)
                {
                    s[j]='0';
                    a--;
                }
                else if(s[i]=='1' && b>0)
                {
                    s[j]='1';
                    b--;
                }
                else if(s[j]=='0' && a>0)
                {
                    s[i]='0';
                    a--;
                }
                else if(s[j]=='1' && b>0)
                {
                    s[i]='1';
                    b--;
                }
                else
                    {
                        flag=0;
                        cout<<"-1"<<endl;
                        break;
                    }
            }
            else
                    {
                        flag=0;
                        cout<<"-1"<<endl;
                        break;
                    }
        }
        if(flag!=0 && (a<0 || b<0))
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
