// Last updated: 5/21/2026, 9:57:47 AM
1class Solution {
2public:
3    vector<int> selfDividingNumbers(int left, int right) {
4
5        vector<int> res;
6
7        for (int i = left; i <= right; i++) {
8
9            int num = i;
10
11            while (num > 0) {
12
13                int remainder = num % 10;
14
15                // if digit is 0
16                // or number is not divisible
17                if (remainder == 0 || i % remainder != 0) {
18                    break;
19                }
20
21                num = num / 10;
22            }
23
24            // if num becomes 0
25            // then it is self dividing
26            if (num == 0) {
27                res.push_back(i);
28            }
29        }
30
31        return res;
32    }
33};