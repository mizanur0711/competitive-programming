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
        int len=s.size();
        int mx=-1,x;
        for(int i=0;i<len;i++)
        {
            char c=s[i];
            x=c-'0';
            if(x%2==0)
            {
                mx=i;
                if(s[i]<s[len-1])
                {
                    break;
                }
            }
         //   cout<<x<<" "<<mx<<endl;
        }
        if(mx==-1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            swap(s[mx],s[len-1]);
            cout<<s<<endl;
        }
    }
    return 0;
}
