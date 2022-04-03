class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int mincost = 0;
        vector<int> diff;
        for (auto c : costs)
        {
            mincost += c[0];

            diff.push_back(c[1] - c[0]);
        }
        sort(diff.begin(), diff.end());

        for (int i = 0; i < costs.size() / 2; i++)
        {
            mincost += diff[i];
        }

        return mincost;

    }
};