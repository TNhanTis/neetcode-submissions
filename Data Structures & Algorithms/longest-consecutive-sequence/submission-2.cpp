class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> table;
        for(int i:nums) table.insert(i);
        int max=0;
        for(int i=0;i<nums.size();i++){
            int k=nums[i];
            int count=1;
            if(table.find(k-1)!=table.end()) continue;
            while(table.find(k+1)!=table.end()){
                count++;
                k++;
            }
            if(max<count) max=count;
        }
        return max;
    }
};
