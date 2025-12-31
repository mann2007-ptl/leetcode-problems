// Last updated: 3/6/2026, 2:08:19 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]%3!=0){
                count++;
            }
        }
        return count;
    }
};