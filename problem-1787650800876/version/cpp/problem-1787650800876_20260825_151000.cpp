// Last updated: 8/25/2026, 3:10:00 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        for (int i = 0; i < matrix.size(); i++) {
5            for (int j = i; j < matrix.size(); j++) {
6                swap(matrix[i][j], matrix[j][i]);
7            }
8        }
9
10        for (int i = 0; i < matrix.size(); i++) {
11            reverse(matrix[i].begin(), matrix[i].end());
12        }
13    }
14};