#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,x;
    cin>>t;
    while(t--)
    {

        cin>>n>>x;
        int xt=x;
        int arr[n];
        int mx=0;
          bool ht[100000]={false};
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(arr[i]>mx)
            {
                mx=arr[i];
            }
            ht[arr[i]]=true;
        }
        for(int j=1;j<=100000;j++)
        {
            if(x!=0)
            {
                if(ht[j]==false)
                {
                    ht[j]=true;
                   --x;
                }
            }
        }
        int temp=0;
        for(int p=1;p<=100000;)
        {

            if(ht[p]==true)
            {
                temp=p;
                p++;
            }
            else if(ht[p]==false)
            {
                break;
            }

        }
        cout<<temp<<endl;
    }
    return 0;

}
