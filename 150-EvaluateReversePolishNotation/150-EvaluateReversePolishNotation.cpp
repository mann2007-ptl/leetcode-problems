// Last updated: 6/4/2026, 11:44:23 AM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> s;
5
6        for(string st : tokens) {
7
8            if(st == "+" || st == "-" || st == "*" || st == "/") {
9
10                int b = s.top();
11                s.pop();
12
13                int a = s.top();
14                s.pop();
15
16                if(st == "+")
17                    s.push(a + b);
18                else if(st == "-")
19                    s.push(a - b);
20                else if(st == "*")
21                    s.push(a * b);
22                else
23                    s.push(a / b);
24
25            }
26            else {
27                s.push(stoi(st));
28            }
29        }
30
31        return s.top();
32    }
33};