// Last updated: 7/17/2026, 4:23:43 PM
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k>0){
           int minIndex=0;
           int i=0;

            while(i<nums.size()){
                if(nums[i]<nums[minIndex]){
                    minIndex=i;
                }
                i++;
            }
            nums[minIndex]=nums[minIndex]*multiplier;
            k--;
        }
        return nums;
    }
};