class MinStack {
public:
    stack<int > st;
    multiset<int> s;

    void push(int val) {
        st.push(val);
        s.insert(val);

    }

    void pop() {
        multiset<int >::iterator it;
        it = s.find(st.top());
        s.erase(it);
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return *s.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */