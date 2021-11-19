#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int z=0,o=0;
        int flago=0,flagz=0;
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='0')
            {
                z++;
            }
            else
            {
                o++;
            }
            if(s[i]=='1' && s[i+1]=='1' && i<l-1)
            {
                flago=1;
            }
            if(s[i]=='0' && s[i+1]=='0' && i<l-1)
            {
                if(flago==1)
                {
                    flagz=2;
                }
                else
                {
                    flagz=1;
                }
            }
        }
//        if(l==z || l==o)
//        {
//            cout<<"YES"<<endl;
//        }
//        else
        if(flagz==2)
        {
            cout<<"NO"<<endl;
        }
//        else if(flago==1 && o>z)
//        {
//            cout<<"YES"<<endl;
//        }
//        else if(flagz==1 && z>o)
//        {
//            cout<<"YES"<<endl;
//        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
