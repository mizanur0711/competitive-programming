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
        int n,a=0,b;
        cin>>n;
        if(n>10)
        {
            a=n-10;
            b=n-a;
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<a<<" "<<n<<endl;
        }
    }

    return 0;
}

