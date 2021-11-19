#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,counter=0,cnt=0;
    int ht[101];
    cin>>n>>k;
    k=k-1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ht[i]=x;
    }
    int i=k-1,j=k+1;
    if(ht[k]==1)
    {
        counter++;
    }
    while(i>=0 && j<n)
    {
        if(ht[i]==1 && ht[j]==1)
        {
            counter=counter+2;
        }
        i--;
        j++;
    }
    if(i<0)
    {
        for(int p=j;p<n;p++)
        {
            if(ht[p]==1)
            {
                counter++;
            }
        }
    }
    else if(j==n)
    {
        for(int p=i;p>=0;--p)
        {
            if(ht[p]==1)
            {
                counter++;
            }
        }
    }


    cout<<counter<<endl;
    return 0;
    }
