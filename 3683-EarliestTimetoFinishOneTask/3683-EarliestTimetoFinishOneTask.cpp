// Last updated: 6/3/2026, 10:00:28 PM
1class Solution {
2public:
3    int earliestTime(vector<vector<int>>& tasks) {
4        int minSum = INT_MAX;
5
6        for (int i = 0; i < tasks.size(); i++) {
7            int sum = 0;
8
9            for (int j = 0; j < tasks[i].size(); j++) {
10                sum += tasks[i][j];
11            }
12
13            if (sum < minSum) {
14                minSum = sum;
15            }
16        }
17
18        return minSum;
19    }
20};