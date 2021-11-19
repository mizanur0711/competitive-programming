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
        int px,py;
        cin>>px>>py;
        int l=0,r=0,d=0,u=0;
       // cin>>l>>r>>d>>u;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                l--;
            }
            else if(s[i]=='R')
            {
                r++;
            }
            else if(s[i]=='U')
            {
                u++;
            }
            else if(s[i]=='D')
            {
                d--;
            }
        }
       // cout<<"l "<<l<<"r "<<r<<"d "<<d<<"u "<<u;
        if(((px<=r && px>=0) || (px>=l && px<=0)) && ((py<=u && py>=0) || (py>=d && py<=0)))
           {
               cout<<"YES"<<endl;
           }
        else
            {
                cout<<"NO"<<endl;
            }
    }

    return 0;
}

