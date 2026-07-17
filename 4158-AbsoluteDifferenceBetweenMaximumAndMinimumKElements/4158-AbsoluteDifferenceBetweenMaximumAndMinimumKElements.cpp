// Last updated: 7/17/2026, 4:23:25 PM
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());

       int n = nums.size();
       int smallSum = 0;
       int largeSum = 0;
       
       for(int i=0;i<k;i++){
        smallSum = smallSum+nums[i];
       }

       for(int i=n-k;i<n;i++){
        largeSum = largeSum+nums[i];
       }

       return abs(largeSum - smallSum);

    }
};