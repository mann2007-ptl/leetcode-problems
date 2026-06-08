// Last updated: 6/8/2026, 10:02:01 AM
1class Solution {
2public:
3    int minimumCost(vector<int>& cost) {
4        sort(cost.begin(), cost.end(), greater<int>());
5
6        int ans = 0;
7
8        for (int i = 0; i < cost.size(); i++) {
9            if ((i + 1) % 3 != 0) {
10                ans += cost[i];
11            }
12        }
13
14        return ans;
15    }
16};