// Last updated: 6/2/2026, 10:06:45 AM
1class Solution {
2public:
3    int differenceOfSum(vector<int>& nums) {
4        int elements = 0;
5        int digit = 0;
6
7        for (int i = 0; i < nums.size(); i++) {
8            elements += nums[i];
9
10            int num = nums[i];
11            while (num > 0) {
12                digit += num % 10;
13                num /= 10;
14            }
15        }
16
17        return abs(elements - digit);
18    }
19};