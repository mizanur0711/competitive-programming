#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    std::sort(s1.begin(),s1.end());
    int n=(s1.size()/2);
    for(int i=n;i<s1.size();i++)
    {
        cout<<s1[i];
        if(i<s1.size()-1)
      {
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}
