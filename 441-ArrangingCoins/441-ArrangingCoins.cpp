// Last updated: 6/7/2026, 3:40:49 PM
1class Solution {
2public:
3    int arrangeCoins(int n) {
4         long long left = 0, right = n;
5
6        while (left <= right) {
7            long long mid = left + (right - left) / 2;
8            long long coins = mid * (mid + 1) / 2;
9
10            if (coins == n) {
11                return mid;
12            } else if (coins < n) {
13                left = mid + 1;
14            } else {
15                right = mid - 1;
16            }
17        }
18
19        return right;
20    }
21};