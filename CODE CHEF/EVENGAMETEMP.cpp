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
        long so=0,se=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                e++;
                se+=x;
            }
            else
            {
                o++;
                so+=x;
            }
        }
        if(abs(so-se)%2==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }

    return 0;
}

