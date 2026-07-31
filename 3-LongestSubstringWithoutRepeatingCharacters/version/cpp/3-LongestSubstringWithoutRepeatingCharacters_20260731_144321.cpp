// Last updated: 7/31/2026, 2:43:21 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> st;
5
6        int left = 0;
7        int ans = 0;
8
9        for (int right = 0; right < s.size(); right++) {
10            while (st.find(s[right]) != st.end()) {
11                st.erase(s[left]);
12                left++;
13            }
14            st.insert(s[right]);
15
16            ans = max(ans, right - left + 1);
17        }
18        return ans;
19    }
20}
21;