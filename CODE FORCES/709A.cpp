#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,b,d,counter=0,sum=0;
    cin>>n>>b>>d;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<=b)
        {
            sum=sum+x;
        }
            while(sum>d)
    if(sum>d)
        {
        sum=0;
        counter++;
    }
    }
    cout<<counter<<endl;
    return 0;
}
