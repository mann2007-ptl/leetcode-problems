// Last updated: 7/17/2026, 4:25:45 PM
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;

        for(char c : s){
           mp[c]++; 
        }

        int freq = 0;

        for(auto it : mp){
            if(freq==0){
                freq=it.second;
            }
            else if(it.second != freq){
                return false;
            }
        }
        return true;
    }
};