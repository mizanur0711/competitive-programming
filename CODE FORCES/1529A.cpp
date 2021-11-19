#include<bits/stdc++.h>
using namespace std;
int ht[101];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0;
        cin>>n;
        set<int>arr;
        for(int i=0;i<101;i++)
        {
            ht[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.insert(x);
            ht[x]++;
        }
        if(arr.size()==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
        for(int i=0;i<101;i++)
        {
            if(ht[i]>0)
            {
                cout<<n-ht[i]<<endl;
                break;
            }
        }
        }

    }
    return 0;
}
