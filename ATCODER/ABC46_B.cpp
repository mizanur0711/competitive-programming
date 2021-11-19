#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,counter;
    cin>>n>>k;
    counter=k;
        for(int j=1;j<n;j++)
        {
         counter=counter*(k-1);
        }
    cout<<counter<<endl;
    return 0;

}
