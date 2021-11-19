#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            c++;
        }
    }
    while(q--)
    {
        int t,x;
        cin>>t>>x;
        if(t==1)
        {

            arr[x-1]=1-arr[x-1];
            if(arr[x-1]==0)
            {
                c--;
            }
            else
            {
                c++;
            }
        }
        else
        {
            if(x<=c)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
    }


    return 0;
}
