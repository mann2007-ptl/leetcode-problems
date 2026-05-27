// Last updated: 5/27/2026, 9:53:56 AM
1class Solution {
2public:
3    int countGoodSubstrings(string s) {
4       int count = 0;
5
6       for(int i=0;i+2<s.size();i++){
7        if(s[i]!=s[i+1] && 
8           s[i]!=s[i+2] &&
9           s[i+1] != s[i+2]){
10            count++;
11           }
12       }
13       return count;
14    }
15};