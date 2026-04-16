class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int count=1;
        int max=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]) {
                count++;
            }
            else if(nums[i]==nums[i+1]) continue;
            else {
                if(max<count) max=count;
                count=1;
            }
        }
        if(max<count) max=count;
        return max;
    }
};
