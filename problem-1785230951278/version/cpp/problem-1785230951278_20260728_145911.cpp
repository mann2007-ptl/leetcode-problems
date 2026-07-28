// Last updated: 7/28/2026, 2:59:11 PM
1class Solution {
2public:
3    int countQuadruplets(vector<int>& nums) {
4        int n = nums.size();
5        int count = 0;
6
7        for(int i=0;i<n-3;i++){
8            for(int j=i+1;j<n-2;j++){
9                for(int k=j+1;k<n-1;k++){
10                    for(int l=k+1;l<n;l++){
11                        if(nums[i]+nums[j]+nums[k]==nums[l]){
12                            count++;
13                        }
14                    }
15                }
16            }
17        }
18        return count;
19    }
20};