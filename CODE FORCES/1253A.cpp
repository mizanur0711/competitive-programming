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
        int n,c=0;
        cin>>n;
        int arr[n],arr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        int ind=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=arr2[i])
            {
                ind=i;
                break;
            }
        }
        if(ind==-1  && c==0)
        {
            cout<<"YES"<<endl;
            c++;
        }
        else
        {
            int dif=arr2[ind]-arr[ind];
            if(dif<=0 && c==0)
            {
                cout<<"NO"<<endl;
                c++;
            }
            else
            {
            int i;
            for(i=ind+1;i<n;i++)
            {
                if(arr[i]==arr2[i])
                {
                    break;
                }
                else if(arr2[i]-arr[i]!=dif && c==0)
                {
                    cout<<"NO"<<endl;
                    c++;
                    break;
                }
            }
            bool flag=true;
            for(int j=i+1;j<n;j++)
            {
                if(arr2[j]!=arr[j] & c==0)
                {
                    cout<<"NO"<<endl;
                    c++;
                    flag=false;
                    break;
                }
            }
            if(flag && c==0)
            {
            cout<<"YES"<<endl;
            }
        }
        }
    }

    return 0;
}

