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
        vector<int> v;
        long long arr[n+1];
        for(int i=1;i<n+1;i++)
        {
            cin>>arr[i];
        }
        set<long long>st;
        for(int i=1;i<=n;i++)
        {
            st.insert(i);
        }
        for(int i=n,j=n+1;i>0;i--)
        {
            auto it=st.end();
            it--;
            long long a=*it;
            it=st.find(arr[i]);
            st.erase(it);
            if(a==arr[i])
            {
                for(int k=i;k<j;k++)
                {
                    cout<<arr[k]<<" ";
                }
                j=i;
            }
        }
        cout<<endl;
    }
    return 0;
}

