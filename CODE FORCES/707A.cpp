#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,counter=0;
    char c;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c;
            if(c=='B' ||c=='W' || c=='G' )
            {
                counter++;
            }
        }
    }
    if(counter==(n*m))
    {
        cout<<"#Black&White"<<endl;

    }
    else
    {
        cout<<"#Color"<<endl;
    }

    return 0;


}
