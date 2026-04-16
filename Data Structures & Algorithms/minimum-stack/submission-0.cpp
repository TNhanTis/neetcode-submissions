class MinStack {
public:
    stack<int> st;
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int min=st.top();
        stack<int> temp=st;
        while(!temp.empty()){
            min=(min>temp.top()) ? temp.top() : min;
            temp.pop();
        }
        return min;
    }
};
