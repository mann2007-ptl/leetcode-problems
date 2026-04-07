// Last updated: 4/7/2026, 10:03:04 AM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map<int, int> mp;
5
6        for (int value : nums) {
7            mp[value]++;
8        }
9
10        int freq = nums.size() / 2;
11
12        for (auto it : mp) {
13            if (it.second > freq) {
14                return it.first;
15            }
16        }
17
18        return -1;
19    }
20};