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
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr1[i]==arr2[j])
                {
                    cout<<"YES"<<endl;
                    cout<<"1"<<" "<<arr1[i]<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

