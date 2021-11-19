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
        int i,j;
        int n=s.size();
        int flag=1;
        for(i=0,j=n-1;i<=j;i++,j--)
        {
            if(s[i]==s[j])
            {
                cout<<"1st if"<<endl;
                if(i==j)
                {
                    if(s[i]=='1')
                    {
                        b--;
                    }
                    else if(s[i]=='0')
                    {
                        a--;
                    }
                    else
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
                }
                else if(s[i]=='1' && b>=2)
                {
                    b=b-2;
                }
                else if(s[i]=='0'&& a>=2)
                {
                    a=a-2;
                }
                if(s[i]=='?')
                {
                    cout<<"dhukse"<<endl;
                    if(a>=2)
                    {
                        s[i]='0';
                        s[j]='0';
                        a=a-2;
                    }
                    else if(b>=2)
                    {
                        s[i]='1';
                        s[j]='1';
                        b=b-2;
                    }
                    else
                    {
                        flag=0;
                        cout<<"-1"<<endl;
                        break;
                    }
                }
            }
            else if((s[i]!=s[j]) && (s[i]=='?' || s[j]=='?'))
            {
                cout<<"2nd if"<<endl;
                if(s[i]=='1' && b>0)
                {
                    b--;
                    if(b>0)
                    {
                        s[j]='1';
                        b--;
                    }
                    else
                    {
                        flag=0;
                        cout<<"-1"<<endl;
                        break;
                    }
                }
                else if(s[i]=='0' && a>0 )
                {
                    a--;
                    if(a>0)
                    {
                        s[j]='0';
                        a--;
                    }
                    else
                        {
                        flag=0;
                        cout<<"-1"<<"s[i]=='0'"<<endl;
                        break;
                    }
                }
                else if(s[j]=='1' && b>0)
                {
                    b--;
                    if(b>0)
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
                else if(s[j]=='0' && a>0 )
                {
                    a--;
                    if(a>0)
                    {
                        s[i]='0';
                        a--;
                    }
                    else
                        {
                        flag=0;
                        cout<<"-1"<<endl;
                        break;
                    }
                }
        }
        else
        {
        flag=0;
        cout<<"last "<<"-1"<<endl;
        break;
        }
        }
        if(1)
        {
            cout<<s<<endl;
        }
        if(a<0 || b<0)
        {
            cout<<"hehehe"<<endl;
        }

    }
    return 0;
}
