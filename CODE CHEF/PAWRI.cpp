#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int i=0;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<"Case "<<++i<<": ";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='h' && s[i+1]=='t' && s[i+2]=='t' && s[i+3]=='p' && s[i+4]!='s' && i<5)
            {
                cout<<"https";
                i=i+3;
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<endl;

    }
    return 0;
}
