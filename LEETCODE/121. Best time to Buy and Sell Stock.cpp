
//greedy approach
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int mn = INT_MAX, ans = 0;

		for (int i = 0; i < prices.size(); i++)
		{
			mn = min(prices[i], mn);
			ans = max(ans, prices[i] - mn);
		}
		return ans;
	}
};

//two pointer
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int left = 0;
		int right = 1;
		int ans = 0;
		while (right < prices.size())
		{
			ans = max(ans, prices[right] - prices[left]);
			if (prices[left] > prices[right])
			{
				left = right;
			}
			right++;
		}
		return ans;
	}
};