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
        int d,c;
        cin>>d>>c;
        int arr[3],arr2[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        cin>>arr2[0]>>arr2[1]>>arr2[2];
        int sum1=arr[0]+arr[1]+arr[2];
        int sum2=arr2[0]+arr2[1]+arr2[2];
        int flag1=0,flag2=0;
        if(sum2<150)
        {
            sum2+=d;
            flag2=1;
        }
        if(sum1<150)
        {
            sum1+=d;
            flag1=1;
        }
        if(flag1 && flag2)
        {
            cout<<"NO"<<endl;
        }
        else if(flag1)
        {
            if(sum1+sum2+c<sum1+sum2+d)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(flag2)
        {
            if(sum1+sum2+c<sum1+sum2+d)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
        else if(sum1+sum2+c<sum1+sum2+d*2)
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

