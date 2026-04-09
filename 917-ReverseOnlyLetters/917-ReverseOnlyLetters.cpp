// Last updated: 4/9/2026, 10:17:32 AM
1class Solution {
2public:
3    string reverseOnlyLetters(string s) {
4        int i = 0;
5        int j = s.size() - 1;
6
7        while (i < j) {
8            if (!(isalpha(s[i]))) {
9                i++;
10            } else if (!(isalpha(s[j]))) {
11                j--;
12            } else {
13                swap(s[i], s[j]);
14                i++;
15                j--;
16            }
17        }
18        return s;
19    }
20};