#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {

        long long arr[3][3],sum=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>arr[i][j];
                sum+=arr[i][j];
            }
        }
        sum=sum/6;
        long long ans=arr[1][0]+arr[1][2]+sum;
        arr[0][0]=ans-(arr[0][1]+arr[0][2]);
        arr[1][1]=sum;
        arr[2][2]=ans-(arr[2][0]+arr[2][1]);
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
