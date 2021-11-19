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
        if(k>n/2 || (n<3 && k!=0))
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int temp=n,l=k,flag=1;
            for(int i=1;i<=n-k;i++)
            {
                cout<<i<<" ";
                if(flag && l>0)
                {
                    cout<<temp<<" ";
                    temp--;
                    l--;
                    flag!=flag;
                }

            }
            cout<<endl;
        }

    }
    return 0;
}
