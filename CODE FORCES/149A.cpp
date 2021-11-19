#include<bits/stdc++.h>
using namespace std;
bool comp(int boro,int choto)
{
    return boro>choto;
}
int main()
{
    int k,counter=0,sum=0;
    int arr[12];
    cin>>k;
    for(int i=0;i<12;i++)
    {
        cin>>arr[i];
    }
    std::sort(arr,arr+12,comp);
    for(int i=0;i<12;i++)
    {
        if(sum==k || sum>k )
        {
            break;
        }
        else if(sum<=k)
        {
            sum=sum+arr[i];
            counter++;
        }
    }
    if(counter>=12 && sum <k)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<counter<<endl;
    }
    return 0;

}
