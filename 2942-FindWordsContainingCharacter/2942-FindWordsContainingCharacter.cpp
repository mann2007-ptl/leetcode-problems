// Last updated: 6/13/2026, 11:33:36 AM
1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int> res;
5
6        for(int i=0;i<words.size();i++){
7            for(char ch : words[i]){
8                if(ch==x){
9                    res.push_back(i);
10                    break;
11                }
12            }
13        }
14        return res;
15    }
16};