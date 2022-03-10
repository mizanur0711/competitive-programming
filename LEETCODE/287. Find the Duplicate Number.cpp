class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int >s;
        int f;
        for (auto x : nums)
        {
            if (s.find(x) != s.end())
            {
                f = x;
                break;
            }

            else
            {
                s.insert(x);
            }
        }
        return f;
    }
};