#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int mn=10,n,mx=0,counter;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;)
        {
            counter=1;
            for(int j=i;j<n;j++)
            {
                if(abs(arr[j]-arr[j+1])<=2)
                {
                    i=j+1;
                    counter++;
                }
                else
                {
                    i=j+1;
                    break;
                }
            }

            mn=min(mn,counter);
            mx=max(mx,counter);
        }
        cout<<mn<<" "<<mx<<endl;

    }
    return 0;
}
