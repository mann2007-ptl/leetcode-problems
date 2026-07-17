// Last updated: 7/17/2026, 4:23:31 PM
class Solution {
public:
    string processStr(string s) {
       string st = "";

       for(char ch : s){
        if(ch>='a' && ch<='z'){
            st.push_back(ch);
        }
        else if(ch=='*'){
            if(!st.empty()){
                st.pop_back();
            }
        }
        else if(ch=='#'){
            st+=st;
        }
        else if(ch=='%'){
            reverse(st.begin(),st.end());
        }
       }
       return st;
    }
};