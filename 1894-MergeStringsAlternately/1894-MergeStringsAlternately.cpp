// Last updated: 7/17/2026, 4:25:54 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int i=0;
        int j=0;

        while(i<word1.size() || j<word2.size()){
            if(i<word1.size()){
                res=res+word1[i];
                i++;
            }
            if(j<word2.size()){
                res=res+word2[j];
                j++;           
         }
        }
        return res;
    }
};