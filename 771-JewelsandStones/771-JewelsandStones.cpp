// Last updated: 5/14/2026, 9:50:15 AM
1class Solution {
2public:
3    string interpret(string command) {
4        string ans = "";  // This will store the final result
5
6        // Loop through each character of the input string
7        for (int i = 0; i < command.size(); i++) {
8
9            // Case 1: If character is 'G', just add it to result
10            if (command[i] == 'G') 
11                ans += 'G';
12
13            // Case 2: If we find a closing bracket ')'
14            else if (command[i] == ')') {
15
16                // Check previous character
17                // If previous is '(' → pattern is "()"
18                if (command[i-1] == '(') 
19                    ans += 'o';   // replace "()" with 'o'
20
21                // Otherwise pattern must be "(al)"
22                else 
23                    ans += "al";  // replace "(al)" with "al"
24            }
25        }
26
27        // Return the final interpreted string
28        return ans;
29    }
30};