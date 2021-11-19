#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,counter=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        if(k+5*i<=240)
        {
            k=k+5*i;
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
