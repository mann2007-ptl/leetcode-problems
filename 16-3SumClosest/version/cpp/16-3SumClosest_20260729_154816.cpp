// Last updated: 7/29/2026, 3:48:16 PM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5
6        int n = nums.size();
7        int ans = nums[0] + nums[1] + nums[2];
8
9        for (int i = 0; i < n - 2; i++) {
10            int left = i + 1;
11            int right = n - 1;
12
13            while (left < right) {
14                int sum = nums[i] + nums[left] + nums[right];
15
16                if (abs(target - sum) < abs(target - ans)) {
17                    ans = sum;
18                }
19
20                if (sum < target) {
21                    left++;
22                } else if (sum > target) {
23                    right--;
24                } else {
25                    return target;
26                }
27            }
28        }
29
30        return ans;
31    }
32};