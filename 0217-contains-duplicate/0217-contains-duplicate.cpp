class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> countdub;
        int n = nums.size();

        for(int i =0;i<n;i++){
            countdub[nums[i]]++;
            if(countdub[nums[i]]>1){
                return true;
            }
        }

        return false;

    }
};