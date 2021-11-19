#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    while(n--)
    {
        cin>>k;
        if(360%(180-k)==0)
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
