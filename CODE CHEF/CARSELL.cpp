#include<bits/stdc++.h>
using namespace std;
#define MOD (1000000000+7)
bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    int t;
    long long arr[100005],sum=0;
    cin>>t;
    while(t--)
    {
        sum=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
//            sum=sum+arr[i];
//            if(arr[i]-i>=1)
//            {
//                sum=sum+arr[i]-i;
//            }
//            else if(arr[i]-i<=)
//            {
//                sum=sum+1;
//            }
        }
        sort(arr,arr+n,comp);
        for(int i=0;i<n;i++)
        {
            if(arr[i]-i>=0)
            {
            sum=sum+arr[i]-i;
            }
            else
            {
            sum=sum+0;
            }
            sum=sum%MOD;

        }
//        for(int i=0;i<n;i++)
//        {
//            if(arr[i]-i>=0)
//            {
//                sum=sum+arr[i]-i;
//            }
//            else if(arr[i]-i<0)
//            {
//                sum=sum+0;
//            }
//
//        }
//        if(sum-n>=0)
 //       {
//        cout<<sum-n<<endl;
//        }
 //       else
//        {
        cout<<sum<<endl;
//        }
            }
    return 0;

}
