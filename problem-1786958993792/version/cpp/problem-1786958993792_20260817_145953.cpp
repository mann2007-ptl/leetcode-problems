// Last updated: 8/17/2026, 2:59:53 PM
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int count = 0;
6
7        for (int i = 1; i < nums.size(); i++) {
8            while (nums[i - 1] >= nums[i]) {
9                nums[i]++;
10                count++;
11            }
12        }
13        return count;
14    }
15};