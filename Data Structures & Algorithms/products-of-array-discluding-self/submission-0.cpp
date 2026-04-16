class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        vector<int> pre;
        vector<int> pos(nums.size());
        pre.push_back(1);
        for(int i=1;i<nums.size();i++){
            pre.push_back(pre[i-1]*nums[i-1]);
        }
        pos[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--){
            pos[i]=pos[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(pre[i]*pos[i]);
        }
        return ans;
    }
};
