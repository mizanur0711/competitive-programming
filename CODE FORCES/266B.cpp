#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,k;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j=j+2;
            }
            else
                j++;

        }

    }
    cout<<s<<endl;

    return 0;
}
