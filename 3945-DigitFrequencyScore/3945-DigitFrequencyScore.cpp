// Last updated: 6/13/2026, 11:44:06 AM
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        int score = 0;
5
6        while(n>0){
7            int digit = n % 10;
8            score+=digit;
9            n=n/10;
10        }
11        return score;
12    }
13};