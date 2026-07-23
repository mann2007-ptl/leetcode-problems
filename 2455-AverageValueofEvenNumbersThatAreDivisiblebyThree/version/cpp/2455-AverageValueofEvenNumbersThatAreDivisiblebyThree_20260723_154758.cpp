// Last updated: 7/23/2026, 3:47:58 PM
1class Solution {
2public:
3    int averageValue(vector<int>& nums) {
4        int count = 0;
5        int sum = 0;
6
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] % 2 == 0 && nums[i] % 3 == 0) {
9                count++;
10                sum += nums[i];
11            }
12        }
13
14        if (count == 0) {
15            return 0;
16        }
17
18        return sum / count;
19    }
20};