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
        int64_t a,b,n,c=0;
        cin>>a>>b>>n;
        while(n>=a && n>=b)
        {
            if(a<b)
            {
                a=a+b;
                c++;
            }
            else
            {
                b=b+a;
                c++;

            }
        }
        cout<<c<<endl;

    }
    return 0;
}
