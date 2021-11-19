#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int j;
    bool flag=true;
    while(flag)
   {
       flag=false;
        for(j=n-2;j>=0;)
        {
            if((s[j]=='0' && s[j+1]=='1') || (s[j]=='1' && s[j+1]=='0'))
               {
                   flag=true;
                   s.erase(s.begin()+j,s.begin()+j+2);
               }
               j--;
        }
   }

    cout<<s.size()<<endl;
    return 0;
}
