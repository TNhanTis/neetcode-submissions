class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> count;
        for(int i:nums) count[i]++;
        set<pair<int,int>> topK;
        for(auto i:count) topK.insert({i.second,i.first});
        for(auto i:topK){
            if(ans.size()==k) ans.erase(ans.begin());
            ans.push_back(i.second);
        }
        return ans;
    }
};
