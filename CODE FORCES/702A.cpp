#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=1,mx=0;
    for(int i=0;i<n;i++)
    {
            if(arr[i]>arr[i-1] && i>0)
            {
                c++;
                mx=max(c,mx);
            }
            else
            {
                mx=max(c,mx);
                c=1;
            }
        }
    cout<<mx<<endl;
    return 0;
}
