class Solution {
public:
    int robans(vector<int>& nums,int first,int last) {
       

        int prev = nums[first];
        int prev2 = 0,curr = 0;

        for(int i=first+1;i<last;i++){
            
            int take = nums[i] ;
            if(i>1)take += prev2;
            int nottake = prev;
             curr = max(take , nottake );

            prev2= prev;
            prev= curr;

        } 

        return prev ;
     }

    int rob(vector<int>& nums) {
         int n = nums.size();
         if(n ==1 )return nums[0];
         int ans1 = robans(nums,0,n-1);
         int ans2 = robans(nums,1,n);
         return max(ans1,ans2);
    }
};