#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[105];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counterS=0,counterF=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='S')
        {
         counterS++;
        }
        else if(arr[i]=='F')
        {
            counterF++;
       }
    }
    if(counterS==0 || counterF==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(counterF>counterS)
    {
        if(arr[0]=='F' && arr[n-1]=='S')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else if(arr[0]=='F' && arr[n-1]=='F')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
        cout<<"YES"<<endl;
        return 0;
        }
    }

    else //if (counterF==counterS)
    {
        if((arr[0]=='S') && (arr[n-1]=='F'))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    return 0;
}
