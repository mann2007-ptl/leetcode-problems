// Last updated: 7/31/2026, 3:37:46 PM
1class Solution {
2public:
3    int reverse(int x) {
4
5        int rev = 0;
6
7        while (x != 0) {
8
9            int digit = x % 10;
10
11            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
12                return 0;
13
14            rev = rev * 10 + digit;
15
16            x = x / 10;
17        }
18
19        return rev;
20    }
21};