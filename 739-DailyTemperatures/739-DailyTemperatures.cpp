// Last updated: 6/2/2026, 11:21:28 AM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n = temperatures.size();
5        vector<int> ans(n, 0);
6        stack<int> st;
7
8        for (int i = 0; i < n; i++) {
9            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
10                int prev = st.top();
11                st.pop();
12                ans[prev] = i - prev;
13            }
14            st.push(i);
15        }
16        return ans;
17    }
18};