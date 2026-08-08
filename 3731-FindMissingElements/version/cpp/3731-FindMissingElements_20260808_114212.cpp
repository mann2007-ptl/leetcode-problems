// Last updated: 8/8/2026, 11:42:12 AM
1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        vector<int> res;
7
8        for (int i = nums[0] + 1; i < nums.back(); i++) {
9            if (find(nums.begin(), nums.end(), i) == nums.end()) {
10                res.push_back(i);
11            }
12        }
13
14        return res;
15    }
16};