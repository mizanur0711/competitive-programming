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
        int n;
        cin>>n;
        long long len=(n*(n+1))/2;
        long long arr[n],mem[len];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n>62)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            set<long long > s;
        for(int i=0;i<n;i++)
        {
            long long sum=0;
            for(int j=i;j<n;j++)
            {
                sum |= arr[j];
                s.insert(sum);
            }
        }
        if(s.size()==len)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    }
    return 0;
}
