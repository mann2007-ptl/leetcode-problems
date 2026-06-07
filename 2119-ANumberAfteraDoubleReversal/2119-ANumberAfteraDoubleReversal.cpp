// Last updated: 6/7/2026, 3:45:36 PM
1class Solution {
2public:
3    string addBinary(string a, string b) {
4        string result = "";
5        int i = a.length() - 1;
6        int j = b.length() - 1;
7
8        int carry = 0;
9
10        while(i>=0 || j>=0 || carry >0) {
11            int sum = carry;
12
13            if(i>=0) {
14                sum += a[i] - '0';
15                i--;
16            }
17
18            if(j>=0) {
19                sum += b[j] - '0';
20                j--;
21            }
22
23            
24            result += to_string(sum%2);
25
26            carry = sum/2;
27        }
28
29        reverse(result.begin(), result.end());
30        return result;
31    }
32};