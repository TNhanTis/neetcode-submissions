class Solution {
public:
    int count(vector<int>& nums,int val){
        int count=0;
        for(int i:nums){
            if(val==i) count++;
        }
        return count;
    }
    int indexMax(vector<vector<int>> &ans){
        int idx=0;
        int max=-1;
        for(int i=0;i<ans.size();i++){
            if(ans[i][0]>max){
                max=ans[i][0];
                idx=i;
            }
        }
        return idx;
    }
    void setZero(vector<vector<int>> &ans, int val_to_clear){
        for(int i=0;i<ans.size();i++){
            if(ans[i][1]==val_to_clear){
                ans[i][0]=-1;
            }
        }
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        vector<vector<int>> table;
        for(int i=0;i<nums.size();i++){
            vector<int> temp;
            temp.push_back(count(nums,nums[i]));
            temp.push_back(nums[i]);
            table.push_back(temp);
        }
        for(int i=0;i<k;i++){
            int bestIdx = indexMax(table);
            int val = table[bestIdx][1];
            ans.push_back(val);
            setZero(table, val);
        }

        return ans;
    }
};
