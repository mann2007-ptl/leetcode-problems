// Last updated: 6/5/2026, 3:03:13 PM
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for (char ch : s) {
7            if (ch == '(' || ch == '[' || ch == '{') {
8                st.push(ch);
9            }
10            else {
11                if (st.empty()) {
12                    return false;
13                }
14
15                if ((ch == ')' && st.top() == '(') ||
16                    (ch == ']' && st.top() == '[') ||
17                    (ch == '}' && st.top() == '{')) {
18                    st.pop();
19                }
20                else {
21                    return false;
22                }
23            }
24        }
25
26        return st.empty();
27    }
28};