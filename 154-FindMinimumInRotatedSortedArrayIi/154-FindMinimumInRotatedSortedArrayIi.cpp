// Last updated: 3/6/2026, 2:09:32 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
       sort(nums.begin() , nums.end());
       return nums[0]; 
    }
};