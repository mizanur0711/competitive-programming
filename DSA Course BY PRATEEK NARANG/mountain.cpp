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
    int mx=0;
    for(int i=1;i<n-1;)
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            int c=1;
            int b=i;
            while(b>=1 && arr[b-1]<arr[b])
            {
                c++;
                b--;
            }
            while(arr[i]>arr[i+1] && i<n-1)
            {
                c++;
                i++;
            }
            mx=max(mx,c);
        }
        else
        {
            i++;
        }
        cout<<mx<<endl;
    }
    cout<<"ans  "<<mx<<endl;
    return 0;
}
/*
10
1 2 3 4 5 4 3 2 1 5

*/

