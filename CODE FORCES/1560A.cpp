#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 1; arr.size() <= 1001; i++)
    {
        if ((i % 3 == 0) || (i % 10 == 3))
        {
            continue;
        }
        else
        {
            arr.push_back(i);
        }
    }
    while (t--)
    {
        int x;
        cin >> x;
        cout << arr[x - 1] << endl;
    }


    return 0;
}
