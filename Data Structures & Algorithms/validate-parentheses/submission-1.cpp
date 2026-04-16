class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> pa={{'}','{'},{']','['},{')','('}};
        for(char c: s){
            if(pa.find(c)!=pa.end()){
                if(st.empty() || st.top()!=pa[c]) return false;
                st.pop();
            }
            else st.push(c);
        }
        if(!st.empty()) return false;
        return true;
    }
};
