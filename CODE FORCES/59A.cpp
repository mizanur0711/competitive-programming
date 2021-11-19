#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counterA=0,countera=0,len;
    string s;
    cin>>s;
    len=s.size();
    for(int i=0;i<len;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            countera++;
        }
        else
        {
            counterA++;
        }
    }
    if(countera>=counterA)
    {
        for(int i=0;i<len;i++)
        {
            s[i]=tolower(s[i]);
        }

    }
    else
    {
        for(int i=0;i<len;i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}
