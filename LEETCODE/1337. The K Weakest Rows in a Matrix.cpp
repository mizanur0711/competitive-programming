class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector< pair<int, int> > m(mat.size());
        vector<int> ans(k);
        for (int i = 0; i < mat.size(); i++)
        {
            m[i].first = 0;
            m[i].second = i;
            for (auto x : mat[i])
            {
                if (x == 1)
                {
                    m[i].first++;

                }
            }
        }

        sort(m.begin(), m.end());
        for (int i = 0; i < k; i++)
        {
            ans[i] = m[i].second;
        }
        return ans;

    }
};

