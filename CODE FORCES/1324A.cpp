#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,temp;
        int* mx;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        mx=std::max_element(arr,arr+n,comp);
        temp=n*(*mx);
        if((temp-sum)%2==0 || n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;


}
