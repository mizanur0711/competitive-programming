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
        vector<int >arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(__gcd(arr[i],2*arr[j])>1)
                {
                    c1++;
                }
            }
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(arr[i],2*arr[j])>1)
                {
                    c2++;
                }
            }
        }
        cout<<max(c1,c2)<<endl;
    }
    return 0;
}
