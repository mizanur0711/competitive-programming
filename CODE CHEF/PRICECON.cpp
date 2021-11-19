#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0,sum2=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum=sum+x;
            if(x>=k)
            {
                sum2=sum2+k;
            }
            else
                sum2=sum2+x;
        }
        cout<<sum-sum2<<endl;

    }
    return 0;
}
