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
        int n;
        cin >> n;
        double sum = 0, mx = -10E9 + 1;
        for (int i = 0; i < n; i++)
        {
            double x;
            cin >> x;
            sum += x;
            mx = max(mx, x);
        }
        sum = sum - mx;
        sum = sum / (n - 1);
        sum += mx;
        printf("%.9lf\n", sum);

    }
    return 0;
}
