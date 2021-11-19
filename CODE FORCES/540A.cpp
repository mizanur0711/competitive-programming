#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string l,s;
    cin>>t>>l>>s;
    int sum=0;
    for(int i=0;i<t;i++)
    {
        int d=abs(l[i]-s[i]);
        d=min(d,10-d);
        sum=sum+d;
    }
    cout<<sum<<endl;
    return 0;
}
