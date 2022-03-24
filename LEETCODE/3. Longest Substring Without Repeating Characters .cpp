class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int l = 0;
        int r = 0;
        int maximum_len = 0;
        while (r < s.size())
        {
            char c = s[r];
            if (m.count(c))
            {
                maximum_len = max(maximum_len, r - l);
                l = max(l, m[c] + 1);
            }
            m[c] = r++;
        }

        return max(maximum_len, r - l);

    }
};