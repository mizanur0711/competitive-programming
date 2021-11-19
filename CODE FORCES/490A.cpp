#include<bits/stdc++.h>
using namespace std;
int w[3];
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
        w[x-1]++;
    }
    sort(w,w+3);
    int len=w[0];
    if(w[0]==0 || w[1]==0 || w[2]==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else
    {
        cout<<len<<endl;

    for(int i=0;i<len;i++)
    {
        int c1=0,c2=0,c3=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==1 && c1==0)
            {
                cout<<j+1<<" ";
                arr[j]=0;
                c1++;
            }
            if(arr[j]==2 && c2==0)
            {
                cout<<j+1<<" ";
                arr[j]=0;
                c2++;
            }
            if(arr[j]==3 && c3==0)
            {
                cout<<j+1<<" ";
                arr[j]=0;
                c3++;
            }

        }
        cout<<endl;
    }
    return 0;
    }

}
