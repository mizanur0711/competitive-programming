#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a > b)
        {
            swap(a, b);
        }
        long long dif = b - a, last;
        last = 1 + dif - 1;
        last += dif;

        if (c > last || c + dif == a || c + dif == b || a > last || b > last)
        {
            cout << "-1" << endl;
        }
        else if (c - dif >= 1)
        {

            cout << c - dif << endl;

        }
        else
        {
            cout << c + dif << endl;
        }

    }


    return 0;
}
