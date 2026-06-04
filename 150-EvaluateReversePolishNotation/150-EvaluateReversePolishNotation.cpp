// Last updated: 6/4/2026, 11:47:48 AM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5
6        for(string s : tokens) {
7
8            if(s == "+" || s == "-" || s == "*" || s == "/") {
9
10                int b = st.top();
11                st.pop();
12
13                int a = st.top();
14                st.pop();
15
16                if(s == "+")
17                    st.push(a + b);
18                else if(s == "-")
19                    st.push(a - b);
20                else if(s == "*")
21                    st.push(a * b);
22                else
23                    st.push(a / b);
24
25            }
26            else {
27                st.push(stoi(s));
28            }
29        }
30
31        return st.top();
32    }
33};