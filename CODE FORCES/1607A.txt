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
        string s;
        cin >> s;
        string c;
        cin >> c;
        vector<int> v;
        for (int i = 0; i < c.size(); i++)
        {
            char x = c[i];
            int  y = s.find(x);
            v.push_back(y);
        }
        int ans = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            ans += abs(v[i] - v[i + 1]);
        }
        cout << ans << endl;
    }


    return 0;
}