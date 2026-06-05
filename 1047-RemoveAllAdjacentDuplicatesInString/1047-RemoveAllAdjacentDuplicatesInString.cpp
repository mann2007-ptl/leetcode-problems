// Last updated: 6/5/2026, 2:36:46 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string res = "";
5
6        for (int i = 0; i < s.size(); i++) {
7            if (res.size() == 0) {
8                res.push_back(s[i]);
9            } else {
10                if (res[res.size() - 1] == s[i]) {
11                    res.pop_back();
12                } else {
13                    res.push_back(s[i]);
14                }
15            }
16        }
17        return res;
18    }
19};