#include<iostream>
using namespace std;
int main()
{
    int n,h;
    int arr[1005];
    cin>>n>>h;
    int counter=n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int j=0;j<n;j++)
    {
        counter+=(arr[j]>h);

//        if(arr[j]>h)
//        {
//            counter=counter+1;
//        }
//        else continue;
    }
    cout<<counter<<endl;
    return 0;

}
