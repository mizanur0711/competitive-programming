#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int p=unique(s.begin(),s.end())-s.begin();
        cout<<a*n + max(n*b,((p/2)+1)*b)<<endl;
    }
    return 0;
}3
3 2 0
000
5 -2 5
11001
6 1 -4
100111

