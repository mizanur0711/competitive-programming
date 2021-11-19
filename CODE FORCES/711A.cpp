#include <bits/stdc++.h>
using namespace std;
//const char arr[1000][5];
int main()
{
    int n;
    //freopen("input.txt","r",stdin);
    cin>>n;
    char arr[n][5];
    for(int i=0;i<n;i++)
    {
        {
            for(int j=0;j<5;j++)
                cin>>arr[i][j];
        }
    }
    bool ans=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            if((arr[i][j*3]=='O') && (arr[i][j*3+1]=='O'))
            {
                arr[i][j*3]='+';
                arr[i][j*3+1]='+';
                ans=true;
                break;
            }
            if(ans)
            {
                break;
            }
        }
          if(ans)
            {
                break;
            }
    }
     if(ans)
     {
        cout<<"YES"<<endl;
          for(int i=0;i<n;i++)
    {
        {
            for(int j=0;j<5;j++)
                cout<<arr[i][j];
        }
        cout<<endl;
    }
     }
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }
    return 0;

}
