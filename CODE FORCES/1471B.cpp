#include<bits/stdc++.h>
using namespace std;
const int Max=5e6 + 10;
int arr[Max];
int cnt[Max];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            cnt[i]=1;
        }
        for(int i=1;i<=n;i++)
        {
            if(arr[i]%x==0)
            {
                arr[n+1]=arr[i]/x;
                cnt[n+1]=cnt[i]*x;
                n++;
            }
            else
            {
                break;
            }
        }
        long long sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+= arr[i]*cnt[i];
        }

        cout<<sum<<endl;
    }

    return 0;
}

