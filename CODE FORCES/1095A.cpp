#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2="";
    int i=0,j=1,len;
    cin>>len;
    cin>>s1;
    while(i<len)
    {
        char c=s1[i];
        s2=s2+c;
        i=i+j;
        j++;
    }
    cout<<s2<<endl;;
    return 0;
}
