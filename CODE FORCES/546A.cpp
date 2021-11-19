#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    long long sum=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum=sum+k*i;
    }
    if(sum>n)
    {
    cout<<sum-n<<endl;
    }
    else
        cout<<0<<endl;
    return 0;
}
