#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
  if (b == 0)
  {
    return a;
  }
  else
  {
  return gcd(b, a % b);
  }
}
long long lcm(long long a,long long b)
{
    return (a*b/(gcd(a,b)));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,a,d,arr[5];
        cin>>n>>m>>a>>d;
        for(int i=0;i<5;i++)
        {
            arr[i]=a+i*d;
        }
        long long d1=--n,d2=m,subsets=(1<<5);
        for(int i=1;i<subsets;i++)
        {
            long long deno=1,c=0;
            for(int j=0;j<5;j++)
            {
                if(i & (1<<j))
                {
                    c++;
                    deno=lcm(deno,arr[j]);
                }
            }
            if(c & 1)
            {
                n=n-d1/deno;
                m=m-d2/deno;
            }
            else
            {
                n=n+d1/deno;
                m=m+d2/deno;
            }
        }
        cout<<m-n<<endl;
    }

    return 0;
}
