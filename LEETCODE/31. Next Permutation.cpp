class Solution {
public:
	void nextPermutation(vector<int>& nums) {
		bool val = next_permutation(nums.begin(), nums.end());
		if (val == false)
		{
			sort(nums.begin(), nums.end());
		}
	}
};