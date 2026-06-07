// Last updated: 6/7/2026, 9:14:03 PM
1class Solution {
2public:
3    vector<int> findDegrees(vector<vector<int>>& matrix) {
4        vector<int> ans(matrix.size(),0);
5
6        for(int i=0;i<matrix.size();i++){
7            for(int x : matrix[i]){
8                ans[i]+=x;
9            }
10        }
11        return ans;
12    }
13};