// Last updated: 4/14/2026, 3:10:38 PM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4
5        if (strs.empty()){
6            return "";
7        }
8        string words = strs[0];
9
10        for (int i = 0; i < strs.size(); i++) {
11            while(strs[i].find(words) != 0){
12                words.pop_back();
13
14                if(words.empty()){
15                    return "";
16                }
17            }
18        }
19        return words;
20    }
21};