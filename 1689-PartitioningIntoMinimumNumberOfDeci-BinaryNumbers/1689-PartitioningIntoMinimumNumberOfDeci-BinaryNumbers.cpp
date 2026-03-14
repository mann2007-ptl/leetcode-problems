// Last updated: 3/14/2026, 10:30:58 PM
1class Solution {
2public:
3    int minPartitions(string n) {
4        int maxDigit = 0;
5
6        for(char value : n){
7            maxDigit = max(maxDigit , value - '0');
8        }
9        return maxDigit;
10    }
11};