class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> count;
        for(int i:nums) count[i]++;
        set<pair<int,int>,greater<pair<int,int>>> topK;
        for(auto i:count) topK.insert({i.second,i.first});
        auto it=topK.begin();
        for(int i=0;i<k;i++){
            ans.push_back(it->second);
            it++;
        }
        return ans;
    }
};
