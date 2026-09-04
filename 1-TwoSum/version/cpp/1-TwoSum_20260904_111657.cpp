// Last updated: 9/4/2026, 11:16:57 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> mp;
5
6        for (int i = 0; i < nums.size(); i++) {
7            int a = nums[i];
8            int b = target - a;
9
10            if (mp.find(b) != mp.end()) {
11                return {mp[b],i};
12            }
13            mp[a]=i;
14        }
15        return {};
16    }
17};