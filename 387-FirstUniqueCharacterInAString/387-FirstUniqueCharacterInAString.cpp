// Last updated: 7/17/2026, 4:27:22 PM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;

        for(char value : s){
            mp[value]++;
        }    

        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                return i;
            }
        }

        return -1;
    }
};