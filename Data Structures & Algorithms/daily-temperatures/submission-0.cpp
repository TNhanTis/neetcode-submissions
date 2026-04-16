class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        int n=temperatures.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(temperatures[i]<temperatures[j]) {
                    ans[i]=j-i;
                    break;
                }
                
            }
        }
        return ans;
    }
};
