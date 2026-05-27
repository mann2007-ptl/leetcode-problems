// Last updated: 5/27/2026, 9:44:36 AM
1class Solution {
2public:
3    int countGoodSubstrings(string s) {
4        int ans = 0;
5
6        for(int i = 0; i + 2 < s.length(); i++) {
7
8            char a = s[i];
9            char b = s[i + 1];
10            char c = s[i + 2];
11
12            if(a != b && b != c && a != c) {
13                ans++;
14            }
15        }
16
17        return ans;
18    }
19};