// Last updated: 4/2/2026, 3:40:57 PM
1class Solution {
2public:
3    bool doesAliceWin(string s) {
4        for (int i = 0; i < s.size(); i++) {
5            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
6                s[i] == 'u') {
7                return true;
8            }
9        }
10        return false;
11    }
12};