#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    string arr;
    cin>>arr;
    char p='a';
    for(int i=0;i<arr.size();i++)
    {

        sum=sum+ min(abs(p-arr[i]+26)%26,abs(arr[i]-p+26)%26);
        p=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
