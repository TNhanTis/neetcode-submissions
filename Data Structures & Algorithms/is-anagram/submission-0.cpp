class Solution {
public:
    int count(string d,char x){
        int count=0;
        for(char c: d){
            if(c==x) count++;
        }
        return count;
    }
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        if(s.empty()&&t.empty()) return true;
        for(char c: s){
            if(count(s,c)!=count(t,c)) return false;
        }
        return true;
    }
};
