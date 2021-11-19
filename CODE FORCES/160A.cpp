#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
    return b<a;
}
int main()
{

    int n,arr[101],sum=0,sum2=0,counter=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    std::sort(arr,arr+n,comp);
    sum=sum/2;
    for(int i=0;i<n;i++)
    {
        sum2=sum2+arr[i];
        counter++;
        if(sum2>sum)
        {
            break;
        }
    }
    cout<<counter<<endl;
    return 0;

}
