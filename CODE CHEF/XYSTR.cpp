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
        int counter=0;
        for(int i=0;i<s.size();)
        {
            if((s[i]=='x' && s[i+1]=='y')  || (s[i]=='y' && s[i+1]=='x'))
            {
                counter++;
                i=i+2;
            }
            else
                i++;
        }
        cout<<counter<<endl;
    }
    return 0;

}
