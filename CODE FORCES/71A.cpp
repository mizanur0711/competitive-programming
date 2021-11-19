#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    int loc=s.size();
    if(loc<=10)
    {
        cout<<s<<endl;
        continue;
    }
    else
    {
        cout<<s[0]<<(loc-2)<<s[loc-1]<<endl;
    }
    }
    return 0;
}
