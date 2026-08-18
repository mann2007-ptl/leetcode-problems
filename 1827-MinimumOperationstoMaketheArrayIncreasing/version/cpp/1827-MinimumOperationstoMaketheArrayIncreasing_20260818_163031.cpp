// Last updated: 8/18/2026, 4:30:31 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int res = 0;
5        for (int i = 1; i < nums.size(); i++) {
6            if (nums[i] <= nums[i - 1]) {
7                int op = nums[i - 1] + 1;
8                res += op - nums[i];
9                nums[i] = op;
10            }
11        }
12        return res;
13    }
14};