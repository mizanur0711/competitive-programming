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
        int n,counter=0,rounding=1;
        cin>>n;
        vector<int >s;
        while(n>0)
        {
            if(n%10!=0)
            {
                int x=n%10;
                x=x*rounding;
                s.push_back(x);
            }
            rounding=rounding*10;
            n=n/10;

        }
         cout<<s.size()<<endl;
         for(int i=0;i<s.size();i++)
         {
             cout<<s[i]<<" ";
         }
         cout<<endl;
        }
    return 0;
}
