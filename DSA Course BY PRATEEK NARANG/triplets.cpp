// pass by value mean sending the copy of that vector not the vector directly sended-->void fun(vector<int> arr)
// if we want to pass by reference we will write void fun(vector<int> &arr)
//cout<<v.capacity()<<endl;  // when the capacity of vector become full it created a new vector of double size and copy the prev elements to it
//fill constructor--> vector<int > v(100,0);
//unordered_set here find takes O(1) it save value like -->value-key like 1-true
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t=1;
    while(t--)
    {
        /* triplets soln
        int n,sum;
        cin>>n>>sum;
        vector<int >arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<=n-3;i++)
        {

            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int cur_sum=arr[i];
                cur_sum+=arr[j];
                cur_sum+=arr[k];
                if(cur_sum==sum)
                {
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                    j++;
                    k--;
                }
                else if(cur_sum>sum)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }

        } */

    }
    return 0;
}
