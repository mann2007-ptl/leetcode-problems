// Last updated: 5/11/2026, 9:35:39 AM
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int len = 0;
5
6        for(int i=s.length()-1;i>=0;i--){
7            if(s[i]!=' '){
8                len++;
9            }
10            else if(len>0){
11                break;
12            }
13        }
14        return len;
15    }
16};