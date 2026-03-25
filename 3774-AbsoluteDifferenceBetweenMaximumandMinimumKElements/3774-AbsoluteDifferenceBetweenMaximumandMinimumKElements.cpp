// Last updated: 3/25/2026, 11:20:28 AM
1class Solution {
2public:
3    int absDifference(vector<int>& nums, int k) {
4       sort(nums.begin(),nums.end());
5
6       int n = nums.size();
7       int smallSum = 0;
8       int largeSum = 0;
9       
10       for(int i=0;i<k;i++){
11        smallSum = smallSum+nums[i];
12       }
13
14       for(int i=n-k;i<n;i++){
15        largeSum = largeSum+nums[i];
16       }
17
18       return abs(largeSum - smallSum);
19
20    }
21};