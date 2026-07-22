class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> nummap;
        int n = nums.size();

        for(int i=0;i<n;i++){
            int a = target - nums[i];
            if(nummap.count(a)){
                return {nummap[a],i};
            } 
            nummap[nums[i]] = i;
        }

        return {};
    }
};
