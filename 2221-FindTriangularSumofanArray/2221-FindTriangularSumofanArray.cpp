// Last updated: 3/25/2026, 11:30:11 AM
1class Solution {
2public:
3    int triangularSum(vector<int>& nums) {
4        int n = nums.size();
5
6        for(int i=n-1;i>0;i--){
7            for(int j=0;j<i;j++){
8                nums[j]=(nums[j]+nums[j+1]) % 10;
9            }
10        }
11
12        return nums[0];
13    }
14};