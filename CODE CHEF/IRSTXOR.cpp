#include<bits/stdc++.h>
using namespace std;
string convert(long long n)
{
    string s="";
    while(n>0)
    {
        if(n%2==1)
        {
            s="1"+s;
        }
        else
        {
            s="0"+s;
        }
        n=n/2;
    }
    return  s;
}
long long c_b(string s)
{
    long long p=1,ans=0;
    for(long long i=s.size()-1;i>=0
    ;i--)
    {
        ans+=((s[i]-'0')*p);
        p*=2;
    }
    return ans;

}
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
        string s1=convert(n);
        string a="",b="";
        bool flag=false;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='0')
            {
                a+="1";
                b+="1";
            }
            else
            {
                if(flag)
                {
                    a+="0";
                    b+="1";
                }
                else
                {
                    a+="1";
                    b+="0";
                    flag=true;
                }
            }
        }
        long long a1=c_b(a);
        long long b1=c_b(b);
        cout<<a1*b1<<endl;

    }
    return 0;
}
