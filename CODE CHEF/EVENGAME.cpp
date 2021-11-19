///not ac
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
        int n;
        cin>>n;
        //int arr[n];
        int o=0,e=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if(o==e && n%2==0)
        {
            cout<<"2"<<endl;
        }
        else if(e==n && n%2==0)
        {
            cout<<"1"<<endl;
        }
        else if(o==n && n%2==0)
        {
            cout<<"1"<<endl;
        }
        else if(o==n && n%2==1)
        {
            cout<<"2"<<endl;
        }
        else if(e==n && n%2==1)
        {
            cout<<"1"<<endl;
        }
        else if(o>e && n%2==1)
        {
            cout<<"1"<<endl;
        }
        else if(e>o && n%2==1)
        {
            cout<<"2"<<endl;
        }
    }

    return 0;
}

