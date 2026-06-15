// Last updated: 6/15/2026, 11:33:42 AM
1class Solution {
2public:
3    int sumOfUnique(vector<int>& nums) {
4        unordered_map<int, int> obj;
5        int sum = 0;
6
7        for (int num : nums) {
8            if (obj.find(num) == obj.end()) {
9                obj[num] = 1;
10            } else {
11                obj[num]++;
12            }
13        }
14
15        for (auto it : obj) {
16            if (it.second == 1) {
17                sum += it.first;
18            }
19        }
20
21        return sum;
22    }
23};