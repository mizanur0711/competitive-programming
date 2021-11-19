#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int mn=2e9;
    bool flag=false;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            mn=min(mn,abs(arr[i]-arr[i+1])/2);
            flag=true;
        }
    }
    if(!flag)
    {
    cout<<"-1"<<endl;
    }
    else
    {
        cout<<mn<<endl;
    }

    return 0;
}
