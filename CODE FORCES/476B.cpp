#include<bits/stdc++.h>
using namespace std;
int cntbit(int x)
{
    int cnt=0;
    while(x)
    {
        x&=(x-1);
        cnt++;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1;
    string s2;
    cin>>s1>>s2;
    int ans1=0,ans2=0,n=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='+')
        {
            ans1++;
        }
        else
        {
            ans1--;
        }
        if(s2[i]=='+')
        {
            ans2++;
        }
        else if(s2[i]=='-')
        {
            ans2--;
        }
        else
        {
            n++;
        }
    }
    int p=0;

    for(int i=0;i<(1<<n);i++)
    {
        int k=cntbit(i)-(n-cntbit(i));
        if(ans2+k==ans1)
        {
            p++;
        }
    }
    double pro =(double)p/(double)(1<<n);
    cout<<fixed<<setprecision(12);
    cout<<pro<<endl;
    return 0;
}

