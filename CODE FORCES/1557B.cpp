#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int f;
        if (arr[0] > arr[1])
        {
            f = 1;
        }
        else
        {
            f = 0;
        }
        int c = 0, temp = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1] && f == 0 )
            {
                c++;
                f = 1;

            }
            else if (arr[i] < arr[i + 1] && f == 1)
            {
                c++;
                f = 0;
            }
            else
            {
                temp++;
            }
        }
        if (c < k && temp + c - 1 >= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}
