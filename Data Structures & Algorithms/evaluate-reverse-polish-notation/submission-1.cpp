class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string s: tokens){
            if(s=="+"){
                int temp=st.top();
                st.pop();
                temp+=st.top();
                st.pop();
                st.push(temp);
            }
            else if(s=="-"){
                int temp=st.top();
                st.pop();
                temp=st.top()-temp;
                st.pop();
                st.push(temp);
            }
            else if(s=="*"){
                int temp=st.top();
                st.pop();
                temp*=st.top();
                st.pop();
                st.push(temp);
            }
            else if(s=="/"){
                int temp=st.top();
                st.pop();
                temp=st.top()/temp;
                st.pop();
                st.push(temp);
            }
            else st.push(stoi(s));
        }
        return st.top();
    }
};
