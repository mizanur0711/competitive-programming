#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    deque<int > dq(10);
    for(int i=0;i<10;i++)
        dq[i]=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
        for(int j=0;j<10;j++)
        {
            if(dq[j]==0)
            {
            dq[j]=1;
            break;
            }
        }
        }
        else if(s[i]=='R')
        {
           for(int j=9;j>=0;j--)
        {
            if(dq[j]==0)
            {
            dq[j]=1;
            break;
            }
        }
        }
        else
        {
            dq[s[i]-'0']=0;
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<dq[i];
    }
    cout<<endl;
    return 0;
}
