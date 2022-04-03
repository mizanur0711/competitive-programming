class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        int c = 0;

        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                l++;
                c++;
            }
            if (c > 1)
            {
                break;
            }
        }

        l = 0;
        r = s.size() - 1;
        int c2 = 0;

        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                r--;
                c2++;
            }
            if (c2 > 1)
            {
                break;
            }
        }

        if (c == 1 || c2 == 1 )
        {
            return true;
        }
        if (c == 0 || c2 == 0)
        {
            return true;
        }

        return false;

    }
};