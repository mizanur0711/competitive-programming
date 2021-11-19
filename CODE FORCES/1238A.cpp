#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long x,y;
    while(t--)
    {
        cin>>x>>y;
        long long diff=x-y;
        if(diff>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
