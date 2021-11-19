#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n],s[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s[i]=arr[i];
    }
    sort(s,s+n);
    int l=-1,r=-1;
    map<int,int >mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=mp[arr[i]];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        {
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]!=i)
        {
            r=i;
            break;
        }
    }
    if(l==-1 || r==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
        reverse(arr+l,arr+r+1);
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i)
            {
                flag=false;
            }
        }
        if(flag)
        {
            cout<<"yes"<<endl;
            cout<<l+1<<" "<<r+1<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }

    return 0;
}

