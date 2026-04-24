// Last updated: 4/24/2026, 9:46:02 AM
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string ans;
5
6        for (char st : s) {
7            if ((st >= 'A' && st <= 'Z') ||(st >= 'a' && st <= 'z') ||
8            (st >= '0' && st <= '9')) {
9
10                if (st >= 'A' && st <= 'Z') {
11                    st = st + 32;
12                }
13
14                ans += st;
15            }
16        }
17
18        int i = 0;
19        int j = ans.size() - 1;
20
21        while (i < j) {
22            if (ans[i] != ans[j]) {
23                return false;
24            }
25            i++;
26            j--;
27        }
28
29        return true;
30    }
31};