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
        if(n%2==1)
        {
            cout<<"1"<<" "<<n/2<<" "<<n/2<<endl;
        }
        else if(n%2==0 && n%4==0)
        {
            cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
        }
        else
        {
            cout<<"2"<<" "<<(n/2)-1<<" "<<(n/2)-1<<endl;
        }
    }
    return 0;
}
