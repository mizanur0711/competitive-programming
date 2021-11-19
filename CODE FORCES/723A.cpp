#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout<<abs(arr[1]-arr[0])+abs(arr[2]-arr[1])<<endl;
    return 0;
}
