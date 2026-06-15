// Last updated: 6/15/2026, 11:43:20 AM
1class Solution {
2public:
3    bool areOccurrencesEqual(string s) {
4        unordered_map<char,int> mp;
5
6        for(char c : s){
7           mp[c]++; 
8        }
9
10        int freq = 0;
11
12        for(auto it : mp){
13            if(freq==0){
14                freq=it.second;
15            }
16            else if(it.second != freq){
17                return false;
18            }
19        }
20        return true;
21    }
22};