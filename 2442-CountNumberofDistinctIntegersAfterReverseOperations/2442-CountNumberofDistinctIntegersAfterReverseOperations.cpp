// Last updated: 5/25/2026, 9:32:42 AM
1class Solution {
2public:
3    int countDistinctIntegers(vector<int>& nums) {
4        // set stores only unique values
5        set<int> s;
6
7        // Traverse every number in array
8        for (int x : nums) {
9            // Insert original number
10            s.insert(x);
11
12            int rev = 0;
13            int n = x;
14
15            // Reverse the number
16            while (n > 0) {
17                // Take last digit and add to rev
18                rev = rev * 10 + (n % 10);
19                // Remove last digit
20                n /= 10;
21            }
22            // Insert reversed number
23            s.insert(rev);
24        }
25        // Return count of unique numbers
26        return s.size();
27    }
28};