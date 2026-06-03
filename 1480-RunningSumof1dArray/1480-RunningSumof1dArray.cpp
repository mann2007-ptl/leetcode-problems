// Last updated: 6/3/2026, 11:52:25 AM
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        vector<int> res;
5        int sum = 0;
6
7        for (int i = 0; i < nums.size(); i++) {
8            sum += nums[i];
9            res.push_back(sum);
10        }
11
12        return res;
13    }
14};