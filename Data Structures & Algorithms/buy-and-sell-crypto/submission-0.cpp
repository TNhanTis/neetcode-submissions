class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=1;
        int max=0;
        while(right<prices.size()){
            if(prices[left]<=prices[right]){
                if(max<prices[right]-prices[left]) max=prices[right]-prices[left];
            }
            else{
                left=right;
            }
            right++;
        }
        return max;
    }
};
