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
        int len=s.size();
        if(s[len-1]=='1')
        {
            int x=0;
            for(int i=1;i<=len;i++)
            {
                x=x+i;
            }
            cout<<x<<endl;
        }
        else if(s[len-1]=='2')
        {
            int x=0;
            for(int i=1;i<=len;i++)
            {
                x=x+i;
            }
            cout<<10+x<<endl;
        }
              else if(s[len-1]=='3')
        {
            int x=0;
            for(int i=1;i<=len;i++)
            {
                x=x+i;
            }
            cout<<20+x<<endl;
        }
              else if(s[len-1]=='4')
        {
            int x=0;
            for(int i=1;i<=len;i++)
            {
                x=x+i;
            }
            cout<<30+x<<endl;
        }

              else if(s[len-1]=='5')
        {
            int x=0;
            for(int i=1;i<=len;i++)
            {
                x=x+i;
            }
            cout<<40+x<<endl;
        }

              else if(s[len-1]=='6')
        {
            int x=0;
            for(int i=1;i<=len;i++)
            {
                x=x+i;
            }
            cout<<50+x<<endl;
        }
              else if(s[len-1]=='7')
        {
            int x=0;
            for(int i=1;i<=len;i++)
            {
                x=x+i;
            }
            cout<<60+x<<endl;
        }
               else if(s[len-1]=='8')
        {
            int x=0;
            for(int i=1;i<=len;i++)
            {
                x=x+i;
            }
            cout<<70+x<<endl;
        }
               else if(s[len-1]=='9')
        {
            int x=0;
            for(int i=1;i<=len;i++)
            {
                x=x+i;
            }
            cout<<80+x<<endl;
        }
    }

    return 0;
}
