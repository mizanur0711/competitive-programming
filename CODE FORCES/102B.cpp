#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long sum=0,counter=0;
  while(s.size()!=1)
  {
      sum=0;
        counter++;
        for(int j=0;j<s.size();j++)
            {
            sum=sum+s[j]-'0';
        }
        s=to_string(sum);
    }
    cout<<counter<<endl;
    return 0;

}
