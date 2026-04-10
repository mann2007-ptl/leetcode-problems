// Last updated: 4/10/2026, 3:55:22 PM
class Solution {
public:
    string reverseWords(string s) {
         int n = s.size();
        stringstream ss(s);
        string word;
        vector<string>words;
        while(ss >> word){
            words.push_back(word);
        }
        int m = words.size();
        string ans = "";
        for(int i=m-1;i>=0;i--){
            if(i != 0){
            ans += words[i];
            ans += " ";
            }
            else{
                ans += words[i];
            }

        }
        return ans;
    }
};