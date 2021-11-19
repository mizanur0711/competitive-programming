#include<bits/stdc++.h>
using namespace std;
#define l 1000000009;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int  n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<endl;
        }
        else
        {
            cout<<n/2 +1<<endl;
        }
    }

    return 0;
}
