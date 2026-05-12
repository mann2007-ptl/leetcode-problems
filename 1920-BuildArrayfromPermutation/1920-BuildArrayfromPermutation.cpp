// Last updated: 5/12/2026, 9:37:04 AM
1class Solution {
2public:
3    vector<int> buildArray(vector<int>& nums) {
4        vector<int> ans(nums.size());
5
6        for(int i=0;i<nums.size();i++){
7            ans[i] = nums[nums[i]];
8        }
9        return ans;
10    }
11};