// Last updated: 6/7/2026, 9:33:18 PM
1class Solution {
2public:
3    vector<int> decode(vector<int>& encoded, int first) {
4        vector<int> ans;
5        ans.push_back(first);
6
7        for(int x : encoded){
8            ans.push_back(ans.back()^x);
9        }
10        return ans;
11    }
12};