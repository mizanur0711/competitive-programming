#include<bits/stdc++.h>
using namespace std;
string st="abacaba";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,temp=0;
        string s;
        cin>>n>>s;
        if(s.find(st))
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='?')
                {
                    cout<<"d";
                }
                else
                {
                    cout<<s[i];
                }
            }
            cout<<endl;
        }
        else
        {
        for(int i=0,j=0;i<n;i++)
        {
            if(j==6)
            {
                j=0;
                c++;


            }
            if(s[i]==st[j] || s[i]=='?' && c==0)
            {
                if(s[i]=='?')
                {
                    char c=st[j];
                    s[i]=c;
                }
                if(s[i]=='a' && s[i+1]=='b')
                {
                    temp=i;
                }
                j++;
            }
            else
            {
                j=0;
                i=temp;
            }


        }
        if(c!=0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='?')
                {
                    cout<<"d";
                }
                else
                {
                    cout<<s[i];
                }
            }
            cout<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    }


    return 0;
}

