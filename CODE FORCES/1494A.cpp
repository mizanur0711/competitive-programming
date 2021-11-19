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
        int l=s.size();
        if(s[0]==s[l-1])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int a=0;
            char c=s[0];
            for(int i=0;i<l;i++)
            {
                if(s[i]==c)
                {
                    a++;
                }
                else
                {
                    a--;
                }
            }
        if(a==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    }

    return 0;
}

