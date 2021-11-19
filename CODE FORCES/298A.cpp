#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,start,counterR=0,counterL=0,temp;
    cin>>n;
    string arr;
    cin>>arr;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='R' && counterR==0)
        {
            start=i+1;
            counterR++;
            temp=i+1;
        }
        else if(arr[i]=='R')
        {
            temp++;
            counterR++;
        }
        else if(arr[i]=='L')
        {
            temp++;
            counterL++;
        }
    }
    if(counterL==0)
    {
        cout<<temp<<" "<<start+counterR<<endl;
    }
    else if(counterR==0)
    {
        cout<<arr.find_last_of("L")+1<<" "<<arr.find("L")<<endl;
    }
    else
    {
    cout<<start<<" "<<temp-counterL<<endl;
    }
    return 0;
}
