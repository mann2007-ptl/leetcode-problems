// Last updated: 7/17/2026, 4:23:51 PM
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;
        double minAvg = INT_MAX;

        while(i < j){
            double avg = (nums[i] + nums[j]) / 2.0;
            minAvg = min(minAvg, avg);
            i++;
            j--;
        }

        return minAvg;
    }
};