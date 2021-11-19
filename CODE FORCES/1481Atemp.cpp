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
        int x=px,y=py;
        int l=0,r=0,d=0,u=0;
       // cin>>l>>r>>d>>u;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                x++;
            }
            else if(s[i]=='R')
            {
                x--;
            }
            else if(s[i]=='U')
            {
                y--;
            }
            else if(s[i]=='D')
            {
                y++;
            }
        }
        if((px>0 &&  py>0) && x<=0 && y<=0)
        {
            cout<<"YES"<<endl;
        }
        else if((px<0 &&  py<0) && x>=0 && y>=0)
        {
            cout<<"YES"<<endl;
        }
        else if((px>0 && py<0) && x<=0 && y>=0)
        {
             cout<<"YES"<<endl;
        }
         else if((px<0 && py>0) && x>=0 && y<=0)
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
