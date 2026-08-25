// Last updated: 8/25/2026, 3:48:04 PM
1class Solution {
2public:
3    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
4        map<int, vector<int>> res;
5
6        for (int i = 0; i < mat.size(); i++) {
7            for (int j = 0; j < mat[i].size(); j++) {
8                res[i + j].push_back(mat[i][j]);
9            }
10        }
11
12        vector<int> temp;
13
14        for (auto& it : res) {
15            if (it.first % 2 == 0) {
16                reverse(it.second.begin(), it.second.end());
17            }
18
19            for (int x : it.second) {
20                temp.push_back(x);
21            }
22        }
23        return temp;
24    }
25};