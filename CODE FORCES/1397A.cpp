#include<bits/stdc++.h>
using namespace std;
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
        string s;
        int arr[26];
        for(int i=0;i<26;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int j=0;j<s.size();j++)
            {
                arr[s[j]-'a']++;
            }
        }
        bool flag=true;
        for(int i=0;i<26;i++ )
        {
            if(arr[i]%n!=0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

