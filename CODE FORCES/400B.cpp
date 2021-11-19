#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<int >s;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<m;j++)
        {
            int cnt=0;
            if(arr[i][j]=='G')
            {
                while(j<m)
                {
                    j++;
                    cnt++;
                    if(arr[i][j]=='S')
                    {
                        flag=1;
                        s.insert(cnt);
                        break;
                    }
                }
            }

        }
        if(flag==0)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<s.size()<<endl;
}
