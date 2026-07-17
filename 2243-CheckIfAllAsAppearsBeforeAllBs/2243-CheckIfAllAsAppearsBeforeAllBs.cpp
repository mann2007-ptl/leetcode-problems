// Last updated: 7/17/2026, 4:25:28 PM
class Solution {
public:
    bool checkString(string s) {
        bool seenB = false;

        for(char c : s){
            if(c == 'b'){
                seenB = true;
            }
            if(c == 'a' && seenB){
                return false;
            }
        } 
        return true;
    }
};