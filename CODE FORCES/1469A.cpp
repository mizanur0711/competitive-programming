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
        if(s.size()%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(s[0]==')')
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int l=0,r=0,t=0;
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]=='(')
                    {
                        l++;
                    }
                    else if(s[i]==')')
                    {
                        r++;
                    }
                    else
                    {
                        t++;
                    }
                }
                if(t>=abs(l-r))
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
    }
    }

    return 0;
}
