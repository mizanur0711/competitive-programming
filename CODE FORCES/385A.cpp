#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int c=0,cc=0;
    for(int k=0;k<l;k++)
    {
    for(int i=k;i<l;i++)
    {
        if(s[i]=='b' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='r')
        {
            c+=(l-i-3);
            break;
        }
    }
    }
        cout<<c<<endl;
    return 0;

}
