#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,counter=0;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            counter++;
        }
        else if(x>=1)
        {
            sum=sum+x;
        }
        if(sum>0 && x==-1)
        {
            counter--;
            sum--;
        }
    }
    cout<<counter<<endl;
    return 0;
}
