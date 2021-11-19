#include<iostream>
#include<algorithm>

int arr[1005];
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a,b,c=0,d=0,counter=0;;
   for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(counter==0)
        {
            c=a;
            d=b;
            arr[i]=a+b;
            counter++;
            continue;
        }
        else
            c=arr[i-1]-a;
            d=b;
            arr[i]=c+d;
        }
        std::sort(arr,arr+n);
    cout<<arr[n-1]<<endl;
    return 0;

}
