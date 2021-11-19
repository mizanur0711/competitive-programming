#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4],sum=0,x;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        x=s[i]-'0'-1;
        sum=sum+arr[x];

    }
    cout<<sum<<endl;


    return 0;
}
