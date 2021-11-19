#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a,mn;
    cin>>l>>r>>a;
    int n=l+r+a;
    for(int i=0;i<n;i++)
    {
        if(l==r)
        {
            if((l+r)%2==0 && a-2>=0)
            {
                l++;
                r++;
                a=a-2;
            }
        }
        else if(l<r)
        {
            if(a>0)
            {
                l++;
                a--;
            }
        }
         else if(r<l)
        {
            if(a>0)
            {
                r++;
                a--;
            }
        }
    }
    cout<<min(l,r)*2<<endl;
    return 0;

}
