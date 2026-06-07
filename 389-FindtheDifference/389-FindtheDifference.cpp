// Last updated: 6/7/2026, 4:03:05 PM
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        int sum = 0;
5
6        for(char c : t){
7            sum+=c;
8        }
9        for(char c : s){
10            sum-=c;
11        }
12        return char(sum);
13    }
14};