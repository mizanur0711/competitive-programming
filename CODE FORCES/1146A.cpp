#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string arr;
    std::getline(cin,arr);
    int len;
    len=arr.size();
    int temp=0,counterA=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]=='a')
        {
            counterA++;
        }

    }

    cout<<min(len,2*counterA-1)<<endl;
    return 0;
}

