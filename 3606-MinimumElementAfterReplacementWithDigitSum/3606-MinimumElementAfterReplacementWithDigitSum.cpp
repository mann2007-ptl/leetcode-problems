// Last updated: 7/17/2026, 4:23:46 PM
class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            int temp = nums[i];

            while (temp > 0) {
                int digit = temp % 10;
                sum += digit;
                temp = temp / 10;
            }

            res.push_back(sum);
        }

        int ans = res[0];
        for (int i = 1; i < res.size(); i++) {
            ans = min(ans, res[i]);
        }

        return ans;
    }
};