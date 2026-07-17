// Last updated: 7/17/2026, 4:23:21 PM
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans = nums;

        for(int i=nums.size()-1;i>=0;i--){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};