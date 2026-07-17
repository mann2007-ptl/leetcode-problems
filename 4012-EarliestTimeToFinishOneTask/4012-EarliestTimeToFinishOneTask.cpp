// Last updated: 7/17/2026, 4:23:30 PM
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int minSum = INT_MAX;

        for (int i = 0; i < tasks.size(); i++) {
            int sum = 0;

            for (int j = 0; j < tasks[i].size(); j++) {
                sum += tasks[i][j];
            }

            if (sum < minSum) {
                minSum = sum;
            }
        }

        return minSum;
    }
};