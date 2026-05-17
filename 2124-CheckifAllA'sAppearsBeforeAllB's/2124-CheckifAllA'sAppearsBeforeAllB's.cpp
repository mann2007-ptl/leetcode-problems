// Last updated: 5/17/2026, 8:44:29 AM
1class Solution {
2public:
3    bool checkString(string s) {
4        bool seenB = false;
5
6        for(char c : s){
7            if(c == 'b'){
8                seenB = true;
9            }
10            if(c == 'a' && seenB){
11                return false;
12            }
13        } 
14        return true;
15    }
16};