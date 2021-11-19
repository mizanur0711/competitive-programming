#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[65],counter=0;
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<=N2*n;i=i+2)
    {
        for(int j=1;j<=2*n;j=j+2)
        {
        if(arr[i]==arr[j])
        {
            counter++;
        }
        }

    }
    cout<<counter<<endl;
    return 0;


}

