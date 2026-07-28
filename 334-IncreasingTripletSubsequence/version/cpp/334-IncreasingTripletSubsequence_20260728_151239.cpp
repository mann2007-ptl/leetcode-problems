// Last updated: 7/28/2026, 3:12:39 PM
1class Solution {
2public:
3    bool increasingTriplet(vector<int>& nums) {
4        int first = INT_MAX;
5        int second = INT_MAX;
6
7        for (int num : nums) {
8            if (first >= num) {
9                first = num;
10            } else if (second >= num) {
11                second = num;
12            } else {
13                return true;
14            }
15        }
16
17        return false;
18    }
19};