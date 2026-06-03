// Last updated: 6/3/2026, 9:51:50 PM
1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int sum = 0;
5        int product = 1;
6        int temp = n;
7
8        while (temp > 0) {
9            int digit = temp % 10;
10            sum += digit;
11            product *= digit;
12            temp /= 10;
13        }
14
15        int result = sum + product;
16
17        return n % result == 0;
18    }
19};