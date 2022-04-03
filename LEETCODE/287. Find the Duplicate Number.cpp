class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        s.insert(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            int x = nums[i];
            if (s.find(x) != s.end())
            {
                return x;
            }
            else
            {
                s.insert(x);
            }
        }
        return -1;
    }
};