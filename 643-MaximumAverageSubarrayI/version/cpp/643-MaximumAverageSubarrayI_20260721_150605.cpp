// Last updated: 7/21/2026, 3:06:05 PM
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int left = 0;
5        int right = 0;
6        int sum = 0;
7
8        while(right<k){
9            sum+=nums[right];
10            right++;
11        }
12
13        int maxSum = sum;
14
15        while(right<nums.size()){
16            sum = sum - nums[left];
17            left++;
18
19            sum = sum + nums[right];
20            right++;
21
22            maxSum = max(maxSum , sum);
23        }
24
25        return (double) maxSum / k;
26    }     
27};