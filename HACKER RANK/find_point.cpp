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
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int a=x2+(x2-x1);
        int b=y2+(y2-y1);
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
