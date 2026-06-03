// Last updated: 6/3/2026, 11:54:22 AM
1class Solution {
2public:
3    int fib(int n) {
4      if(n == 0){
5    return 0;
6   }
7   else if(n == 1){
8    return 1;
9   }
10   else{
11    return fib(n-1)+fib(n-2);
12    }  
13    }
14};