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
        long long summx=0,sum=0,n,x;
        cin>>n>>x;
        int c=0;
        for(int i=0;i<n;i++)
        {
            long long p;
            cin>>p;
            summx=summx+(p/x);
            sum=sum+p;
            if(p%x!=0)
            {
                summx++;
            }


        }
        long long mn=sum/x;
        if(sum%x!=0)
        {
            mn++;
        }
            cout<<mn<<" "<<summx<<endl;
    }

    return 0;
}
