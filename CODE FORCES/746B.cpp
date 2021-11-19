#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s,res;
    cin>>n;
    cin>>s;
    if(s.size()==1)
    {
        cout<<s<<endl;
    }
    else
    {
        int k=n-2;
        while(k>=0)
        {
            res=res+s[k];
            k=k-2;
        }
        if(k==-1)
        {
            k=0;
        }
        else
        {
            k=1;
        }
        while(k<n)
        {
            res=res+s[k];
            k=k+2;
        }
        cout<<res<<endl;
    }
    return 0;
}
