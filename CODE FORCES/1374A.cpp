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
        int x,y,n;
        cin>>x>>y>>n;
        if(n%x==y)
        {
            cout<<n<<endl;
        }
        else
        {
            int k=n-y;
            k=k/x;
            cout<<k*x+y<<endl;
        }

    }

    return 0;
}

