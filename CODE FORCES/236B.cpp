#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1;i<=1000000;i++)
    {
        for(int j=i;j<=1000000;j+=i)
        {
            arr[j]++;
        }
    }
    long long int sum=0;
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
              //  cout<<d<<" ";
                sum=((sum%1073741824)+arr[i*j*k])%1073741824;
            }
        }
    }
    cout<<sum%1073741824;
    return 0;
}
