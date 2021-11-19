#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,e=0,o=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2)
            {
                o++;
            }
            else
            {
                e++;
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(i%2!=arr[i]%2)
            {
                c++;
            }

        }
        if(n%2==1 && n>1 && e!=o+1)
        {
            cout<<"-1"<<endl;
        }
        else if(n%2==0 && n>1 && e!=o)
        {
            cout<<"-1"<<endl;
        }
        else if(c%2==1 )
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<c/2<<endl;
        }
    }

    return 0;
}

