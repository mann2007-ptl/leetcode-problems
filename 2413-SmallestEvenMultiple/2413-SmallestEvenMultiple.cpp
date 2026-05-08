// Last updated: 5/8/2026, 8:59:28 AM
1class Solution {
2public:
3    int smallestEvenMultiple(int n) {
4      if(n%2==0){
5        return n;
6      }
7      else{
8        return n*2;
9      }
10    }
11};