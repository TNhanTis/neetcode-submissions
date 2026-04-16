class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]<'0'||(s[left]>'9' && s[left]<'A') || s[left]>'z') {
                left++;
                continue;
            }
            if(s[right]<'0'||(s[right]>'9' && s[right]<'A') || s[right]>'z') {
                right--;
                continue;
            }
            if(tolower(s[left])!=tolower(s[right])) return false;
            left++;
            right--;
        }
        return true;
    }
};
