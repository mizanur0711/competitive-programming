#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int main()
{
    int n,counter=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    vector<int> vc;
    for(int i=0; i<n; i++){
        if(arr[i]>=arr[i+1]){
           vc.push_back(arr[i]);
        }
	 }

	 for(int i=0; i<vc.size(); i++)
     {
        cout<<vc[i]<<" ";
     }
    return 0;

}
