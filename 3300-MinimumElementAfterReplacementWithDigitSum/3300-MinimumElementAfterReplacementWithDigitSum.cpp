// Last updated: 6/3/2026, 10:11:34 PM
1class Solution {
2public:
3    int minElement(vector<int>& nums) {
4        vector<int> res;
5
6        for (int i = 0; i < nums.size(); i++) {
7            int sum = 0;
8            int temp = nums[i];
9
10            while (temp > 0) {
11                int digit = temp % 10;
12                sum += digit;
13                temp = temp / 10;
14            }
15
16            res.push_back(sum);
17        }
18
19        int ans = res[0];
20        for (int i = 1; i < res.size(); i++) {
21            ans = min(ans, res[i]);
22        }
23
24        return ans;
25    }
26};