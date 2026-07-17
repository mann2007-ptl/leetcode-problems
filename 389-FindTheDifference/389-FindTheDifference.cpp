// Last updated: 7/17/2026, 4:27:19 PM
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;

        for(char c : t){
            sum+=c;
        }
        for(char c : s){
            sum-=c;
        }
        return char(sum);
    }
};