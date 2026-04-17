class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());      
        if(h==piles.size()) return right;  
        int ans;
        while(left<=right){
            int mid=(left+right)/2;
            int total=0;
            for(int i:piles){
                total+=(i-1)/mid+1;
            }
            if(total<=h) {
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};
