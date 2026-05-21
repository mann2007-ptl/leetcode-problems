// Last updated: 5/21/2026, 9:39:47 AM
1class Solution {
2public:
3    
4    bool sumOfNumberAndReverse(int num) {
5
6        // Try all numbers from 0 to num
7        for(int i = 0; i <= num; i++) {
8
9            // Copy i into n
10            // because we will change n while reversing
11            int n = i;
12
13            // Variable to store reversed number
14            int rev = 0;
15
16            // Reverse the number
17            while(n) {
18
19                // Take last digit and add to rev
20                rev = rev * 10 + n % 10;
21
22                // Remove last digit from n
23                n /= 10;
24            }
25
26            // Check if original number + reverse equals num
27            if(i + rev == num)
28                return true;
29        }
30
31        // No valid number found
32        return false;
33    }
34};