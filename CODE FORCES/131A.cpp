#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int c=0;
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            c=1;
            break;
        }
    }

    if(c==0)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
            cout<<(char)tolower(s[i]);
           }
           else
        {
          cout<<(char)toupper(s[i]);
        }
        }

        cout<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
    return 0;
}
