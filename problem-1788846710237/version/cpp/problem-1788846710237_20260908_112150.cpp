// Last updated: 9/8/2026, 11:21:50 AM
1class Solution {
2public:
3    int countCommas(int n) {
4       if(n < 1000){
5        return 0;
6       } 
7       int ans = n - 999;
8       return ans;
9    }
10};