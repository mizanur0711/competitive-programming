class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int mid;

        while (s < e)
        {
            mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                e = mid;
            }
            else
            {
                s = mid + 1;

            }
        }

        return nums[s] < target ? s + 1 : s;

    }
};