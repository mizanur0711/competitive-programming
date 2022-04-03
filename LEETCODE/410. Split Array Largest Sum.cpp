class Solution {
public:
    bool check(vector<int> nums, int m, int curr)
    {
        int i = -1, n = nums.size(), count = 1;
        int sum = 0;

        while (++i < n && count <= m)
        {
            if (sum + nums[i] <= curr)
            {
                sum += nums[i];
            }
            else
            {
                sum = nums[i];
                count++;
            }
        }
        return count <= m;

    }
    int splitArray(vector<int>& nums, int m) {
        int l = 0;
        int r = 0;
        int mid;
        int ans;
        for (auto x : nums)
        {
            r += x;
            l = max(l, x);
        }

        ans = r;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (check(nums, m, mid))
            {
                ans = min(mid, ans);
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return ans;
    }
};