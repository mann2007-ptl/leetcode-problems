// Last updated: 6/2/2026, 10:02:35 AM
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int largest = 0;
5
6        for (int i = 0; i < accounts.size(); i++) {
7            int sum = 0;
8
9            for (int j = 0; j < accounts[i].size(); j++) {
10                sum += accounts[i][j];
11
12                if (sum > largest) {
13                    largest = sum;
14                }
15            }
16        }
17
18        return largest;
19    }
20};