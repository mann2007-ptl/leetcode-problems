// Last updated: 7/27/2026, 3:19:01 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4
5        int max = 0;
6
7        for(int i = 0; i < nums.size(); i++) {
8            for(int j = i + 1; j < nums.size(); j++) {
9                if((nums[i] - 1) * (nums[j] - 1) > max) {
10                    max = (nums[i] - 1) * (nums[j] - 1);
11                }
12            }
13        }
14        return max;
15    }
16};