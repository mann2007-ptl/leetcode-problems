// Last updated: 5/14/2026, 10:00:59 AM
1class Solution {
2public:
3    string interpret(string command) {
4        string ans = "";
5
6        for (int i = 0; i < command.size(); i++) {
7            if (command[i] == 'G') {
8                ans += "G";
9            } else if (command[i] == ')') {
10                if (command[i - 1] == '(') {
11                    ans += "o";
12                } else {
13                    ans += "al";
14                }
15            }
16        }
17        return ans;
18    }
19};