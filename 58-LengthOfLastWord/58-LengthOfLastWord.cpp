// Last updated: 7/17/2026, 4:28:12 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
       int len = 0;

       for(int i=s.length()-1;i>=0;i--){
        if(s[i]!=' '){
            len++;
        }
        else if(len>0){
            break;
        }
       }
 return len;

    }
};