#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int r = n/2 +(n%2!=0);
        int rc=0;
        bool slow=false,bot=true;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==-1)
            {
                rc++;
            }
            if(arr[i]>k)
            {
                slow=true;
            }
            if(arr[i]>1)
            {
                bot=false;
            }
        }
        //rc=n-rc;
        if(n-rc<r)
        {
            cout<<"Rejected"<<endl;
        }
        else if(slow==true)
        {
            cout<<"Too Slow"<<endl;
        }
        else if(bot==true && rc==0)
        {
            cout<<"Bot"<<endl;
        }
        else
        {
            cout<<"Accepted"<<endl;
        }
    }

    return 0;
}
