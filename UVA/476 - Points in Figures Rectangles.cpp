#include<bits/stdc++.h>
using namespace std;
int main()
{
    double arr[10][4];
    double x,y;
    bool flag;
    char c;
    int n=0,cases=0;
    while(1)
    {
        cin>>c;

        if(c=='*')
        {
            break;
        }
        if(c=='r')
        {
            cin>>arr[n][0]>>arr[n][1]>>arr[n][2]>>arr[n][3];
            n++;
        }
    }

    while(1)
    {
        cin>>x>>y;
        if(x==9999.9 && y==9999.9)
        {
            break;
        }
        cases++;
        flag=false;

        for(int i=0;i<n;i++)
        {
            if(x>arr[i][0] && x<arr[i][2] && y<arr[i][1] && y>arr[i][3])
            {
                cout<<"Point "<<cases<<" is contained in figure "<<i+1<<endl;
                flag=true;
            }
        }
        if(!flag)
        {
            cout<<"Point "<<cases<<" is not contained in any figure"<<endl;
        }
    }
    return 0;
}
