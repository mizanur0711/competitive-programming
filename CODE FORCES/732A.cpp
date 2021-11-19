#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i=1;
    cin>>k>>r;
    while(i<10)
    {
        if((i*k)%10==0 || (i*k)%10==r)
        {
            cout<<i<<endl;
            return 0;
        }
        else
        {
            i++;
        }
    }

}
