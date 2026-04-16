class Solution {
public:
   int Area(int left, int right, vector<int>& height){
        return (right-left)*min(height[left],height[right]);
    }
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int max=Area(left,right,height);
        while(left<right){
            if(height[left]<height[right]) left++;
            else right--;
            int newArea=Area(left,right,height);
            if(newArea>max) max=newArea;
        }
        return max;
    }
};
