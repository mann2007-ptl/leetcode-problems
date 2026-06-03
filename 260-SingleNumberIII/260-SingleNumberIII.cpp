// Last updated: 6/3/2026, 10:05:13 PM
1class Solution {
2public:
3    vector<int> singleNumber(vector<int>& nums) {
4        unordered_map<int, int> obj;
5        vector<int> res;
6
7        for (int charNum : nums) {
8            if (obj[charNum] == 0) {
9                obj[charNum] = 1;
10            } else {
11                obj[charNum]++;
12            }
13        }
14
15        for (auto it : obj) {
16            if (it.second == 1) {
17                res.push_back(it.first);
18            }
19        }
20
21        return res;
22    }
23};