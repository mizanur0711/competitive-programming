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
        int n,m;
        cin>>n>>m;
        int arr1[n],arr2[m];
        long long sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
            sum1+=arr1[i];
        }
        for(int j=0;j<m;j++)
        {
            cin>>arr2[j];
            sum2+=arr2[j];
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m,greater<int>());
        int c=0,l=min(m,n);
        for(int i=0;i<l;i++)
        {
            if(sum1<=sum2)
            {
               sum1+=(arr2[i]-arr1[i]);
               sum2+=(arr1[i]-arr2[i]);
               cout<<sum1<<" "<<sum2<<endl;
               c++;
            }
            else
            {
                break;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}

