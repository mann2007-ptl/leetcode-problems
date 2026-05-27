// Last updated: 5/27/2026, 9:07:36 AM
1class Solution {
2public:
3    int countAsterisks(string s) {
4        // This variable stores final answer
5        int count = 0;
6
7        // inside = true  -> we are inside | |
8        // inside = false -> we are outside | |
9        bool inside = false;
10
11        // Traverse every character of string
12        for (char ch : s) {
13
14            // If current character is '|'
15            // change inside state
16            if (ch == '|') {
17                inside = !inside;
18            }
19
20            // Count '*' only when outside bars
21            else if (ch == '*' && inside == false) {
22                count++;
23            }
24        }
25        // Return total counted stars
26        return count;
27    }
28};