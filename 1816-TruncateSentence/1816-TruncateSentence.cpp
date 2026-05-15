// Last updated: 5/15/2026, 10:08:09 AM
1class Solution {
2public:
3    string truncateSentence(string s, int k) {
4       int count = 0;
5
6       for(int i=0;i<s.size();i++){
7        if(s[i]==' '){
8            count++;
9        }
10
11        if(count==k){
12            return s.substr(0,i);
13        }
14       }
15       return s;
16    }
17};