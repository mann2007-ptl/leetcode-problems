// Last updated: 9/4/2026, 3:47:17 PM
1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        long long maxi = LLONG_MIN;
5        long long secondMaxi = LLONG_MIN;
6        long long thirdMaxi = LLONG_MIN;
7
8        for (int i = 0; i < nums.size(); i++) {
9            if (nums[i] > maxi) {
10                thirdMaxi = secondMaxi;
11                secondMaxi = maxi;
12                maxi = nums[i];
13            } else if (nums[i] > secondMaxi && maxi != nums[i]) {
14                thirdMaxi = secondMaxi;
15                secondMaxi = nums[i];
16            } else if (nums[i] > thirdMaxi && secondMaxi != nums[i] && maxi != nums[i]) {
17                thirdMaxi = nums[i];
18            }
19        }
20        if(thirdMaxi == LLONG_MIN){
21            return maxi;
22        }
23        return thirdMaxi;
24    }
25};