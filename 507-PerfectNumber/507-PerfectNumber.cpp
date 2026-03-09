// Last updated: 3/9/2026, 4:55:45 PM
1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        int sum = 0;
5        for (int i = 1; i < num; i++) {
6            if (num % i ==  0) {
7                sum += i;
8            }
9        }
10        return sum == num;
11    }
12};