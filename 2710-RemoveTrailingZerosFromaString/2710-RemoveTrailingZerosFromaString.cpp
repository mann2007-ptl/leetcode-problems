// Last updated: 3/10/2026, 11:34:22 AM
1class Solution {
2public:
3    string removeTrailingZeros(string num) {
4        for(int i = num.size() - 1; i >= 0; i--) {
5            if(num[i] == '0') {
6                num = num.substr(0, i);
7            }
8            else {
9                break;
10            }
11        }
12        return num;
13    }
14};