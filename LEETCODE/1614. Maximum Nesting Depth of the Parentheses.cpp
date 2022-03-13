class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans = 0;

        for (char c : s)
        {
            if (c == '(' || c == ')')
            {
                if (c == '(')
                {
                    st.push(c);
                }
                else
                {
                    if (st.empty())
                    {
                        return ans;
                    }
                    if (st.top() == '(' && c != ')')
                    {
                        return ans;
                    }
                    int len = st.size();
                    ans = max(ans, len);
                    cout << ans << " ";
                    st.pop();
                }
            }
        }
        return ans;
    }
};