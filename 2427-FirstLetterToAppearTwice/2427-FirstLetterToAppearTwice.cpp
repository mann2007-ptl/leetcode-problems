// Last updated: 7/17/2026, 4:24:45 PM
class Solution {
public:
    char repeatedCharacter(string s) {
      set<char> st;

      for(char c : s){
        if(st.count(c)){
            return c;
        }
        st.insert(c);
      }

      return ' ';
    }
};