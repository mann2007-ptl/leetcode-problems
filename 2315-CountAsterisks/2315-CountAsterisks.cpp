// Last updated: 5/27/2026, 9:18:03 AM
1class Solution {
2public:
3    int countAsterisks(string s) {
4      int count = 0;
5      bool inside = false;
6
7      for(char ch : s){
8        if(ch == '|'){
9            inside = !inside;
10        }
11        else if(ch == '*' && inside == false){
12           count++; 
13        }
14      }
15      return count;
16    }
17};