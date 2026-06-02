// Last updated: 6/2/2026, 10:04:47 AM
1class Solution {
2public:
3    int countEven(int num) {
4        int count = 0;
5
6        for (int i = 1; i <= num; i++) {
7            int sum = 0;
8            int temp = i;
9
10            while (temp > 0) {
11                sum += temp % 10;
12                temp /= 10;
13            }
14
15            if (sum % 2 == 0) {
16                count++;
17            }
18        }
19
20        return count;
21    }
22};