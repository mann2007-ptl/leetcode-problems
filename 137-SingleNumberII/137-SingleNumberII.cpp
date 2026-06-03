// Last updated: 6/3/2026, 11:54:00 AM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        unordered_map<int, int> mp;
5
6        for (int num : nums) {
7            mp[num]++;
8        }
9
10        for (auto& pair : mp) {
11            if (pair.second == 1) {
12                return pair.first;
13            }
14        }
15
16        return -1;
17    }
18};