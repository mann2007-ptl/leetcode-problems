// Last updated: 4/7/2026, 9:33:04 AM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n = nums.size();
5
6        for(int i=0;i<n;i++){
7            int count = 0;
8            for(int j=0;j<n;j++){
9                if(nums[i]==nums[j]){
10                    count++;
11                }
12            }
13
14            if(count>n/2){
15                return nums[i];
16            }
17        }
18
19        return -1;
20    }
21};