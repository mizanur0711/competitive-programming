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
        int l,c=0,mx=0;
        string s;
        cin>>l>>s;
        for(int i=0;i<l;)
        {
            if(s[i]=='(' && s[i+1]==')')
            {
                i=i+2;
                continue;
            }
            else if(s[i]=='(')
            {
                c++;
                mx=(mx,c);
                i++;
            }
            else if(s[i]==')')
            {
                if(c>0)
                {
                    c--;
                }
                mx=(mx,c);
                i++;
            }

        }
        cout<<mx<<endl;

    }

    return 0;
}

