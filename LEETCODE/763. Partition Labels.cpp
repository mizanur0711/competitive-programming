class Solution {
public:
    vector<int> partitionLabels(string s) {
        int h[26];
        for (int i = 0; i < s.size(); i++)
        {
            h[s[i] - 'a'] = i;
        }
        int last = -1;
        // set<char> c;
        //  c.insert(s[0]);
        last = h[s[0] - 'a'];
        vector<int> ans;
        int idx = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i < last )
            {
                last = max(h[s[i] - 'a'], last);
            }
            else
            {
                cout << i << " ";
                ans.push_back(i - idx + 1);
                idx += ans.back();
                if (i + 1 < s.size())
                {
                    last = max(h[s[i + 1] - 'a'], last);
                }
            }
        }
        return ans;
    }
};