#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> s(n);
     int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i]==s[j] && j>i)
            {
                arr[j]=1;
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
