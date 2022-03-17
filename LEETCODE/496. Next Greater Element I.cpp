class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        stack<int> st;

        for (int x : nums2)
        {
            while (st.size() && st.top() < x)
            {
                m[st.top()] = x;
                st.pop();
            }
            st.push(x);
        }

        vector<int> ans(nums1.size(), -1);

        for (int i = 0; i < nums1.size(); i++)
        {
            auto it = m.find(nums1[i]);
            if (it != m.end())
            {
                ans[i] = it->second;
            }
        }


        return ans;
    }
};