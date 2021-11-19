#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans,counter=0;
        cin>>ans;
        int p=7;
        while(ans!=0)
        {
            if(ans-p>=0)
            {
                counter++;
                ans=ans-p;
            }
            else
            {
                p--;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
