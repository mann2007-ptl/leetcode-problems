// Last updated: 5/27/2026, 9:40:33 AM
1class Solution {
2public:
3    char repeatedCharacter(string s) {
4      set<char> st;
5
6      for(char c : s){
7        if(st.count(c)){
8            return c;
9        }
10        st.insert(c);
11      }
12
13      return ' ';
14    }
15};