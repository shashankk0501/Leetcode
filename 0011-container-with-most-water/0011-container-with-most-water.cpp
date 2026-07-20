class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left =0;
        int right = n-1;
        int maxi = 0 ,sum=0;
        int heights= 0;
        int width =0;

        while(left<right){
            
            int heights = min(height[left],height[right]);
            int width = abs(right-left);
            sum = heights*width;
            maxi = max(maxi,sum);

            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxi;
    }
};