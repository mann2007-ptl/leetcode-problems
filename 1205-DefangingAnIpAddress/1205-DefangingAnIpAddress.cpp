// Last updated: 7/17/2026, 4:26:37 PM
class Solution {
public:
    string defangIPaddr(string address) {
       string res = "";

       for(char ch : address){
        if(ch == '.'){
            res+="[.]";
        }
        else{
            res+=ch;
        }
       }
       return res;
    }
};
