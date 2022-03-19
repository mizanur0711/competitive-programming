class FreqStack {
public:
    FreqStack() {

    }
    unordered_map<int, int> freq;
    unordered_map<int , stack<int> > group_stack;
    int max_freq = 0;

    void push(int val) {
        freq[val]++;
        max_freq = max(max_freq, freq[val]);
        group_stack[freq[val]].push(val);
    }

    int pop() {
        int top_max_element = group_stack[max_freq].top();
        freq[top_max_element]--;
        group_stack[max_freq].pop();

        if (group_stack[max_freq].size() == 0)
        {
            max_freq--;
        }

        return top_max_element;


    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */