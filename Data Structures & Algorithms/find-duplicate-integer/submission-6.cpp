class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int bit=0;
        for(auto& i:nums){
            if(((1<<i)&bit)!=0) return i;
            bit|=(1<<i);
        }
        return 0;
    }
};
