// Last updated: 3/30/2026, 2:07:55 PM
1class Solution {
2public:
3    int arithmeticTriplets(vector<int>& nums, int diff) {
4        int count = 0;
5        for(int i=0;i<nums.size()-2;i++){
6            for(int j=i+1;j<nums.size()-1;j++){
7                for(int k=j+1;k<nums.size();k++){
8                    if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff){
9                        count++;
10                    }
11                }
12            }
13        }
14        return count;
15    }
16};