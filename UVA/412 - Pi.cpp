#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n,n)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(gcd(arr[i],arr[j])==1)
                {
                    c++;
                }

           }
        }
        int l=(n*(n-1))/2;
        if(!c)
        {
            cout<<"No estimate for this data set."<<endl;
        }
        else
        {
            double pi=sqrt((double)6*l*1.0/c);
            cout<<fixed<<setprecision(6)<<pi<<endl;
        }
    }

    return 0;
}

