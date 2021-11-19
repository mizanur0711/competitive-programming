#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,counter=0;
    int a;
    cin>>n>>k;
    while(n--)
    {
        set<int >s;
        cin>>a;
            while(a>0)
            {
                if(a%10<=k)
                {
                    s.insert(a%10);
                }
                    a=a/10;
            }
            if(s.size()==k+1)
            {
                counter++;
            }
    }
    cout<<counter<<endl;
    return 0;
}
