#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int > s;
        int n,x;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
            }
            return 0;
}
