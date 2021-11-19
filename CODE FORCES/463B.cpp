#include<bits/stdc++.h>
using namespace std;
int main()
{
    int energy=0,dol=0,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
        int temp=0;
    for(int i=0;i<n;i++)
    {
        energy=energy+temp-arr[i];

        if(energy<0)
        {
            dol=dol-energy;
            energy=0;
        }
        temp=arr[i];
    }
    cout<<dol<<endl;
    return 0;
}
