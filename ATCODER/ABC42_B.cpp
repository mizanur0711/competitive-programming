#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<string> s;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.push_back(x);

    }
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}
