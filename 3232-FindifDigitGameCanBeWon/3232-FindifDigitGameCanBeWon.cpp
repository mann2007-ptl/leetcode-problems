// Last updated: 6/3/2026, 11:55:52 AM
1class Solution {
2public:
3    bool canAliceWin(vector<int>& nums) {
4        int singleSum = 0;
5        int doubleSum = 0;
6
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] <= 9) {
9                singleSum += nums[i];
10            } else {
11                doubleSum += nums[i];
12            }
13        }
14
15        return singleSum != doubleSum;
16    }
17};