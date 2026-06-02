// Last updated: 6/2/2026, 9:25:17 PM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans = 0;
5
6        for (int num : nums) {
7            ans ^= num;
8        }
9
10        return ans;
11    }
12};