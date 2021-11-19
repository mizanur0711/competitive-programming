#include<iostream>
using namespace std;
int main()
{
    int n,counterA=0,counterD=0;
    cin>>n;
    string arr;
    cin>>arr;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='A')
        {
            counterA++;

        }
        else if(arr[i]=='D')
        {
            counterD++;
        }
    }
    if(counterA>counterD)
    {
        cout<<"Anton"<<endl;
    }
    else if(counterD>counterA)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
