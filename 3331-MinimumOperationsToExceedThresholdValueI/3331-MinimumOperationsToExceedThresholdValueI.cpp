// Last updated: 3/6/2026, 2:08:21 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]<k){
                count++;
            }
        }
        return count;
    }
};