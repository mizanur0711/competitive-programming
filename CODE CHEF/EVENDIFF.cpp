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
        cout<<min(o,e)<<endl;
    }

    return 0;
}

