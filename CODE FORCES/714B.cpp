#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int > s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()<=2)
    {
        cout<<"YES"<<endl;
    }
    else if(s.size()==3)
    {
        vector<int >v;
        for(int x : s)
        {
            v.push_back(x);
        }
        if(v[1]-v[0]==v[2]-v[1])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
