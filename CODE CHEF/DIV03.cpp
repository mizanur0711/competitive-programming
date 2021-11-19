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
        int n=10;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long ans;
        cin>>ans;
        int j=9;
        while(j>=0)
        {
                if(ans>=arr[j])
                {
                    ans=ans-arr[j];
                    arr[j]=0;
                    j--;
                }
                else
                {
                    arr[j]=arr[j]-ans;
                    ans=0;
                    j--;
                }
            }
            int i;
        for(i=9;i>=0;i--)
        {
            if(arr[i]>0)
            {
                break;
            }
        }
        cout<<i+1<<endl;
    }

    return 0;
}

