#include<bits/stdc++.h>
using namespace std;
int ht[5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ht[arr[i]]++;

    }
    int c=0;
    c=c+ht[4]+ht[3]+ht[2]/2;
    if(ht[1]<ht[3])
    {
        ht[1]=0;
    }
    else
    {
        ht[1]=ht[1]-ht[3];
    }
    if(ht[2]%2==1)
    {
        if(ht[1]>2)
        {
            ht[1]=ht[1]-2;
        }
        else
        {
            ht[1]=0;
        }
        c++;
    }
    if(ht[1]%4==0)
    {
        c=c+ht[1]/4;
    }
    else
    {
        c=c+(ht[1]/4) +1;
    }

    cout<<c<<endl;

    return 0;
}
