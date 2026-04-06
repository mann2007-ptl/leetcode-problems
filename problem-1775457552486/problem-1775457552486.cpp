// Last updated: 4/6/2026, 12:09:12 PM
1class Solution {
2public:
3      vector<vector<string>> groupAnagrams(vector<string>& strs) {
4       unordered_map<string,vector<string>>anagram;
5
6       for(string word : strs){
7        string temp = word;
8        sort(temp.begin(),temp.end());
9        anagram[temp].push_back(word);
10       }
11
12       vector<vector<string>> result;
13
14       for(auto& it : anagram){
15        result.push_back(it.second);
16       }
17
18       return result;
19    }
20};