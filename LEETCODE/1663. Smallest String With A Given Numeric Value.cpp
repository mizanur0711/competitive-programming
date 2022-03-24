class Solution {
public:
    string getSmallestString(int n, int k) {
        string s = "";
        for (int i = 0; i < n; i++)
        {
            s += ('a');
        }
        cout << s;
        k = k - n;
        int len = n - 1;
        while (k > 0)
        {
            if (k < 25)
            {
                s[len] = (char)('a' + k);
                k = 0;
            }
            else
            {
                s[len] = (char)('a' + 25);
                k = k - 25;
            }
            len--;

        }

        return s;
    }
};