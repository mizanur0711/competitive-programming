#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        cout<<s[0];
        for(int i=1;i<s.size()-1;)
        {
            if(s[i]==s[i+1])
            {
                cout<<s[i];
                i+=2;
            }
            else
            {
                cout<<s[i];
                i++;
            }
        }
        cout<<s[s.size()-1];
        cout<<endl;

    }
    return 0;
}
