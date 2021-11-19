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
        int arr[101],ht[n];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr[x]++;
            ht[i]=x;
        }
        int temp=1;
        for(int i=0;i<101;i++)
        {
            if(arr[i]==1)
            {
                temp=i;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(ht[i]==temp)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
