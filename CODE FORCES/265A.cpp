#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j=0;
    string s,t;
    cin>>s;
    cin>>t;
    for(int i=0;i<t.size();i++)
    {
        if(s[j]==t[i])
        {
            j++;

        }
    }
    cout<<j+1<<endl;
    return 0;
}
