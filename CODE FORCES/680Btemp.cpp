#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,counter=0,ans=0;
    bool ht[101];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ht[i]=x;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(ht[j]==0)
            {
                break;
            }
            else if(ht[j]==1)
            {
                counter++;

            }
        }
        ans=max(ans,counter);
        counter=0;
    }
    cout<<ans<<endl;
    return 0;

}
