#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int np=n;
    if(n%2)
    {
        np=(np/2)+1;
    }
    else
    {
        np=np/2;
    }
    if(m<=n)
    {
        int k=1,mp=m;
        while(mp<=n)
        {
            mp=m*k;
            if(mp%m==0 && mp>=np)
            {
                cout<<mp<<endl;
                return 0;
            }
            k++;
        }
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
