#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int x,counter=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1] && arr[i]>0)
        {
            counter++;
        }
        if(arr[i]<=0)
        {
          cout<<counter<<endl;
          return 0;
        }
    }
    cout<<counter<<endl;
    return 0;

}
