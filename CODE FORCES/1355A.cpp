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
        string s;
        long long  k,sum=0;
        cin>>s>>k;
        while(k--)
        {
            sum=sum+stoll(s.begin(),s.end();
            sort(s.begin(),s.end());
            sum=sum+ (int)((s.front())-'0')*(int)((s.back())-'0');
            s=sum;
        }
    }



    return 0;
}

