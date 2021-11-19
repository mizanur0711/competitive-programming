#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    //vector<string>s1;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            s1.push_back('0');
        }
        else if(s[i]=='1')
        {
            s1.push_back('1');
        }
        else if(s[i]=='B' && s1.size()>0)
        {
            s1.erase(s1.end()-1);
        }
    }
    cout<<s1<<endl;
    return 0;

}
