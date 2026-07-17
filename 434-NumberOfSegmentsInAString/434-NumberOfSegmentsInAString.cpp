// Last updated: 7/17/2026, 4:27:14 PM
class Solution {
public:
    int countSegments(string s) {
        int count = 0;

        for(int i=0;i<s.size();i++){
            if(s[i]!= ' ' && (i==0 || s[i-1]==' ')){
                count++;
            }
        }

        return count;
    }
};