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
        int a,b;
        cin>>a>>b;
        int temp=max(a,b),area=2*(a*b);
        for(long long i=temp;i<=400000000;i++)
        {
            if(area<=i*i)
            {
                cout<<i*i<<endl;
                break;
            }
        }

        }

    return 0;
}


