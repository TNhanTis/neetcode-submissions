class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        if(s.size()==1) return 1;
        int left=0;
        int right=0;
        int n=s.size();
        int max=0;
        unordered_set<int> sub;
        while(right<n){
            if(sub.find(s[right])!=sub.end()){
                if(max<right-left) max=right-left;
                sub.clear();
                left++;
                right=left;
            }
            else sub.insert(s[right++]);
        }
        if(max<right-left) max=right-left;
        return max;
    }
};
