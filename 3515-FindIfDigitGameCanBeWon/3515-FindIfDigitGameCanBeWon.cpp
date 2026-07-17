// Last updated: 7/17/2026, 4:23:48 PM
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum = 0;
        int doubleSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 9) {
                singleSum += nums[i];
            } else {
                doubleSum += nums[i];
            }
        }

        return singleSum != doubleSum;
    }
};