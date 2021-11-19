#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        bool flag=true;

        int counter=0,temp=0;;
        cin>>n;
        int arr[101];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]!=1)
                {
                    break;
                }
                else if(arr[i]==1 && arr[j]==1 && i!=j)
                {
                    if(j-i>=6)
                    {
                        flag=true;
                        i=j;
                    }
                    else if(j-i<6)
                    {
                        counter++;
                        flag=false;
                        i=j;
                    }
                }
            }
        }


        if(counter==0 && flag==true)
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
