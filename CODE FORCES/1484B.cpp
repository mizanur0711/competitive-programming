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
     vector<int >v;
    for(int i=1;i<=1e6+5;i++)
    {
        int x=sqrt(i);
        if(x*x==i)
        {
            v.push_back(i);
        }
    }
    cout<<v.size()<<endl;1
    }
    return 0;
}
