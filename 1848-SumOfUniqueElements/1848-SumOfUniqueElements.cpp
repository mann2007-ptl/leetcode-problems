// Last updated: 7/17/2026, 4:26:00 PM
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> freq(101, 0);

        for (int num : nums) {
            freq[num]++;
        }

        int sum = 0;

        for (int num : nums) {
            if (freq[num] == 1) {
                sum += num;
            }
        }

        return sum;
    }
};