class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> read;
        for(int i:nums){
            if(read.find(i)!=read.end()) return i;
            read.insert(i);
        }
        return 0;
    }
};
