#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    while(cin>>n>>m>>c)
    {
        if(n+m+c==0)
        {
            break;
        }
        else
        {
            if(c==0)
            {
                cout<<((n-7)*(m-7))/2<<endl;
            }
            else
            {
                cout<<((n-7)*(m-7)+1)/2<<endl;
            }
        }
    }

    return 0;
}
