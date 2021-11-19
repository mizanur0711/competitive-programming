//i had complete done this by other sol+editorial
#include<bits/stdc++.h>
using namespace std;
long long int calc(string s)
{
    long long int ret=stoll(s);
    for(size_t i=1;i<s.size();i++)
    {
        long long int memory=0;
        auto sx=s.substr(0,i);
        ret += stoi(sx)*powl(2,s.size()-i-1);
        auto sy =s.substr(i,s.size()-i);
        ret += calc(sy);
    }
    return ret;
}
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    cout<<calc(s)<<endl;


}

