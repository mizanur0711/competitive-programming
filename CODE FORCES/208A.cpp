#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool flag=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
            if(!flag)
            {
                cout<<" ";
            }
        }
        else
            {
                flag=0;
                cout<<s[i];
            }
    }
    cout<<endl;
    return 0;

}
