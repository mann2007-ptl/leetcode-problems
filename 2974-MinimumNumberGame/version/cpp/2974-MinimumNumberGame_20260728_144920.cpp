// Last updated: 7/28/2026, 2:49:20 PM
1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5
6        for(int i=0;i<nums.size();i+=2){
7           swap(nums[i],nums[i+1]);
8        }
9
10        return nums;
11    }
12};