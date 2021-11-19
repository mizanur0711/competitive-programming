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
        if(n==1)
        {
            cout<<k<<endl;
        }
        else if(n==k)
        {
            cout<<"1"<<endl;
        }
        else if(k<n)
        {
            if(n%k==0)
            {
              cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
        else
        {
            cout<<k/n + (k%n!=0)<<endl;
        }
    }
    return 0;
}

