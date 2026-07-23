// Last updated: 7/23/2026, 3:11:46 PM
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool inc = true;
5        bool dec = true;
6        for (int i = 0; i < nums.size()-1; i++) {
7            if (nums[i] > nums[i + 1]) {
8                inc = false;
9            }
10            if (nums[i] < nums[i + 1]) {
11                dec = false;
12            }
13        }
14        return inc || dec;
15    }
16};