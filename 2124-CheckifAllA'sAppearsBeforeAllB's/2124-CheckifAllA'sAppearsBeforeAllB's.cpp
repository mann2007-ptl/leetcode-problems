// Last updated: 5/17/2026, 8:58:59 AM
1class Solution {
2public:
3    bool isHappy(int n) {
4        
5        while(n!=1 && n !=4){
6           int sum = 0;
7
8           while(n > 0){
9            int digit = n % 10;
10            sum = sum + digit*digit;
11            n=n/10;
12           } 
13
14           n = sum;
15        }
16       return n==1;
17    }
18};