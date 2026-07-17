// Last updated: 7/17/2026, 4:23:54 PM
class Solution {
public:
    bool doesAliceWin(string s) {
          for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i] == 'o' || s[i]=='u'){
                return true;
            }
          }  
          return false;
    }
};