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
        vector<int> v;
        int arr[n+1];
        for(int i=1;i<n+1;i++)
        {
            cin>>arr[i];
        }
        int ht[n+1];
        for(int i=1;i<=n;i++)
        {
            ht[i]=1;
        }
        int temp=n,c=n,large=n,f=0,j=n;
            while(j>0)
            {
                if(arr[j]==large && ht[arr[j]]==1)
                {
                //    cout<<arr[j]<<" ds";
                    temp=j;
                    while(j<=n)
                    {
                        cout<<arr[j]<<" ";
                        ht[arr[j]]=0;
                        f++;
                        j++;
                    }
                    n=temp-1;
                }
                else if(ht[large]!=1)
                {
                  //  cout<<"lg";
                    while(!(ht[large]==1))
                    {
                   //     cout<<large<<" ";
                        large--;
                    }
                }
                else
                {
                //    cout<<"j--";
                    j--;
                }
            }
        cout<<endl;
    }
    return 0;
}

