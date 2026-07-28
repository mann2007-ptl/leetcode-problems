// Last updated: 7/28/2026, 4:22:01 PM
1class Solution {
2public:
3    int sumOddLengthSubarrays(vector<int>& arr) {
4        int n = arr.size();
5        int sum = 0;
6
7        for (int k = 1; k <= n; k += 2) {
8
9            int windowSum = 0;
10
11            for (int j = 0; j < k; j++) {
12                windowSum += arr[j];
13            }
14
15            sum += windowSum;
16
17            for (int j = k; j < n; j++) {
18                windowSum += arr[j];
19                windowSum -= arr[j - k];
20                sum += windowSum;
21            }
22        }
23
24        return sum;
25    }
26};