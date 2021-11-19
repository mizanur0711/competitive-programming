#include<bits/stdc++.h>
using namespace std;
string e="abcdefghijklmnop";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        for(int i=0;i<n;i++)
        {
            int val=0;
            if(arr[i]=='0')
            {
                val=0;
            }
            else
            {
                val=8;
            }
            i++;
            if(arr[i]=='0')
            {
                val=val;
            }
            else
            {
                val=val+4;
            }
            i++;
            if(arr[i]=='0')
            {
                val=val;
            }
            else
            {
                val=val+2;
            }
            i++;
            if(arr[i]=='0')
            {
                val=val;
            }
            else
            {
                val=val+1;
            }
            cout<<e[val%16];
        }
        cout<<endl;

    }

    return 0;
}

