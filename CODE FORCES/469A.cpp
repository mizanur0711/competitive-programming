#include<bits/stdc++.h>
using namespace std;
bool ht[100];
int main()
{
    bool ans=false;
    int n;
    cin>>n;
    int p,q;
    cin>>p;
    int arr[p];
    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
        ht[arr[i]-1]++;
    }
      cin>>q;
      int arr2[q];
    for(int i=0;i<q;i++)
    {
        cin>>arr2[i];
        ht[arr2[i]-1]++;
    }
    for(int i=0;i<n;i++)
    {
        if(ht[i]==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}
