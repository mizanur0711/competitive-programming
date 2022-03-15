class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        int c = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
            {
                st.push(i);
                c++;
            }
            else if (s[i] == ')')
            {
                if (c > 0)
                {
                    st.pop();
                    c--;
                }
                else
                {
                    st.push(i);
                }

            }
        }

        while (!st.empty())
        {
            int temp = st.top();
            s.erase(temp, 1);
            st.pop();
        }
        return s;

    }
};