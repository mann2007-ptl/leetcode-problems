// Last updated: 7/17/2026, 4:26:50 PM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true;
        bool dec = true;
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] > nums[i + 1]) {
                inc = false;
            }
            if (nums[i] < nums[i + 1]) {
                dec = false;
            }
        }
        return inc || dec;
    }
};