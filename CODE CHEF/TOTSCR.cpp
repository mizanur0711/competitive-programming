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
        int n,k;
        cin>>n>>k;
        int arr[k];
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        for(int j=0;j<n;j++)
        {
            string s;
            cin>>s;
            long long ans=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!='0')
                {
                    ans=ans+arr[i];
                }
            }

            cout<<ans<<endl;
            ans=0;
            s.clear();
        }
    }
    return 0;
}

