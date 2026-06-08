// Last updated: 6/8/2026, 9:59:03 AM
1class Solution {
2public:
3    vector<int> leftRightDifference(vector<int>& nums) {
4        vector<int> ans;
5
6        for(int i=0;i<nums.size();i++){
7            int left=0;
8            int right=0;
9
10            for(int j=0;j<i;j++){
11                left=left+nums[j];
12            }
13            for(int j=i+1;j<nums.size();j++){
14                right=right+nums[j];
15            }
16            ans.push_back(abs(left-right));
17        }
18
19        return ans;
20    }
21};