#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    long long ans[1000];
    while(cin>>a>>b)
    {
        long long lna=a.size();
        long long lnb=b.size();
        memset(ans,0,sizeof(ans));
        long long p=0,l,c=0;
        for(int i=lnb-1;i>=0;i--)
        {
            p++;
            l=p-1;
            c=0;
            for(int j=lna-1;j>=0;j--)
            {
                l++;
                long long temp=(b[i]-'0')*(a[j]-'0') + c + ans[l];
                ans[l]=temp%10;
                c=temp/10;
            }
            if(c>0)
            {
                l++;
                ans[l]=c;
            }
        }
        if(a=="0" || b=="0" )
        {
            cout<<"0"<<endl;
        }
        else
        {
            for(int i=l;i>=1;i--)
            {
                cout<<ans[i];
            }
            cout<<endl;
        }
    }
}
