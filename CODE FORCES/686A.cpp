#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,sum=0,counter=0;
    cin>>n>>x;
    sum=sum+x;
    for(int i=0;i<n;i++)
    {
        char x;
        int d;
        cin>>x>>d;
        if(x=='+')
        {
            sum=sum+d;
        }
        else if(x=='-')
        {
            if(sum-d>=0)
            {
                sum=sum-d;
            }
            else
            {
                counter++;
            }
        }
    }
    cout<<sum<<" "<<counter<<endl;
    return 0;
}
