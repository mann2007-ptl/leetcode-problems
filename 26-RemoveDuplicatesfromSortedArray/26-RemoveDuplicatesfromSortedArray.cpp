// Last updated: 4/11/2026, 3:52:52 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.size()==0){
5            return 0;
6        }
7
8        int i=0;
9        for(int j=0;j<nums.size();j++){
10            if(nums[j]!=nums[i]){
11                i++;
12                nums[i]=nums[j];
13            }
14        }
15        return i+1;
16    }
17};