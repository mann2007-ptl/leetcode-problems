// Last updated: 6/7/2026, 10:08:16 PM
1class Solution {
2public:
3    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
4        while(k>0){
5           int minIndex=0;
6           int i=0;
7
8            while(i<nums.size()){
9                if(nums[i]<nums[minIndex]){
10                    minIndex=i;
11                }
12                i++;
13            }
14            nums[minIndex]=nums[minIndex]*multiplier;
15            k--;
16        }
17        return nums;
18    }
19};