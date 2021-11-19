#include<bits/stdc++.h>
using namespace std;
int arr[10010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

        int n,counter=1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int temp=arr[0];
            for(int i=1;i<n;i++)
            {
                if(arr[i]<=temp)
                {
                    counter++;
                }
                temp=min(arr[i],temp);
            }
            cout<<counter<<endl;

    }
    return 0;

}
