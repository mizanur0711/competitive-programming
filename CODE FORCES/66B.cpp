#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0,mx=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       for(int j=i;j<n-1;j++)
       {
           if(arr[j]>=arr[j+1])
           {
               counter++;
           }
           else
            break;
       }
       for(int j=i;j>0;j--)
       {
           if(arr[j]>=arr[j-1])
           {
               counter++;
           }
           else
            break;

       }
        mx=max(mx,counter);
        counter=0;

    }
    cout<<mx+1<<endl;
    return 0;
}
