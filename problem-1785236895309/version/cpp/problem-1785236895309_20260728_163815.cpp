// Last updated: 7/28/2026, 4:38:15 PM
1class Solution {
2public:
3    vector<int> minCosts(vector<int>& cost) {
4        vector<int> res;
5        int minimumCost = INT_MAX;
6
7        for(int x : cost){
8            minimumCost = min(minimumCost,x);
9            res.push_back(minimumCost);
10        }  
11        return res;
12    }
13};