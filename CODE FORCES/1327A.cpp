#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--)
    {
        cin>>n>>k;
        if(n%2==1 && k==1)
        {
            cout<<"YES"<<endl;
        }
        else if(n%2==0 && k%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(n%2==1 && k%2==1)
        {
            cout<<"YES"<<endl;
        }
        else if(n%2==0 && k%2==1)
        {
            cout<<"NO"<<endl;
        }
          else if(n%2==1 && k%2==0)
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
