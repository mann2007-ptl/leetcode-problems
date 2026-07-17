// Last updated: 7/17/2026, 4:24:32 PM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elements = 0;
        int digit = 0;

        for (int i = 0; i < nums.size(); i++) {
            elements += nums[i];

            int num = nums[i];
            while (num > 0) {
                digit += num % 10;
                num /= 10;
            }
        }

        return abs(elements - digit);
    }
};