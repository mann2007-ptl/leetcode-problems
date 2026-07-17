// Last updated: 7/17/2026, 4:26:15 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            res.push_back(sum);
        }

        return res;
    }
};