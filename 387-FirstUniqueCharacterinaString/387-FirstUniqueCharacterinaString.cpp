// Last updated: 4/15/2026, 11:07:47 AM
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char,int> mp;
5
6        for(char value : s){
7            mp[value]++;
8        }    
9
10        for(int i=0;i<s.size();i++){
11            if(mp[s[i]]==1){
12                return i;
13            }
14        }
15
16        return -1;
17    }
18};