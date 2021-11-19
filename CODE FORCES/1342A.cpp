#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,x,y,sum=0;
        cin>>x>>y;
        cin>>a>>b;
        sum=b*min(x,y)+a*(max(x,y)-min(x,y));
        cout<<min(sum,a*(x+y))<<endl;
    }


    return 0;
}
