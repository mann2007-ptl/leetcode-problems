// Last updated: 7/17/2026, 4:24:46 PM
class Solution {
public:
    int countAsterisks(string s) {
      int count = 0;
      bool inside = false;

      for(char ch : s){
        if(ch == '|'){
            inside = !inside;
        }
        else if(ch == '*' && inside == false){
           count++; 
        }
      }
      return count;
    }
};