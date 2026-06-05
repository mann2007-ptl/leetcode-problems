// Last updated: 6/5/2026, 2:43:54 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string result;
5
6        for (int i = 0; i < s.size(); i++) {
7            if (!result.empty() && result.back() == s[i]) {
8                result.pop_back();
9            } else {
10                result.push_back(s[i]);
11            }
12        }
13
14        return result;
15    }
16};