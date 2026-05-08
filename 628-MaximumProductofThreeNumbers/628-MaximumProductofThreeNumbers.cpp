// Last updated: 5/8/2026, 9:11:19 AM
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5
6        int n = nums.size();
7
8        int product1 = nums[n-1] * nums[n-2] * nums[n-3];
9
10        int product2 = nums[0] * nums[1] * nums[n-1];
11
12        return max(product1 , product2);
13    }
14};