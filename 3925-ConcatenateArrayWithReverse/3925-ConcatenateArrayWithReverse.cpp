// Last updated: 6/7/2026, 9:15:38 PM
1class Solution {
2public:
3    vector<int> concatWithReverse(vector<int>& nums) {
4        vector<int> ans = nums;
5
6        for(int i=nums.size()-1;i>=0;i--){
7            ans.push_back(nums[i]);
8        }
9        return ans;
10    }
11};