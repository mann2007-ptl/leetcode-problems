// Last updated: 6/15/2026, 11:38:42 AM
1class Solution {
2public:
3    int sumOfUnique(vector<int>& nums) {
4        vector<int> freq(101, 0);
5
6        for (int num : nums) {
7            freq[num]++;
8        }
9
10        int sum = 0;
11
12        for (int num : nums) {
13            if (freq[num] == 1) {
14                sum += num;
15            }
16        }
17
18        return sum;
19    }
20};