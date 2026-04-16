class Solution {
public:
    bool isAnagram(string a, string b){
        if(a.size()!=b.size()) return false;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if(strs.empty()) return ans;
        if(strs.size()==1) {
            ans.push_back(strs);
            return ans;
        }
        for(int i=0;i<strs.size();i++){
            vector<string> temp;
            temp.push_back(strs[i]);
            for(int j=i+1;j<strs.size();j++){
                if(isAnagram(strs[i],strs[j])){
                    temp.push_back(strs[j]);
                    strs.erase(strs.begin()+j);
                    j--;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
