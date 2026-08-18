// Last updated: 8/18/2026, 3:24:14 PM
1class Solution {
2public:
3    int myAtoi(string s) {
4        int i = 0;
5        int sign = 1;
6
7        long long result = 0;
8
9        while(i<s.size() && s[i]==' '){
10            i++;
11        }
12
13        if(s[i]=='-'){
14            sign = -1;
15            i++;
16        }
17        else if(s[i]=='+'){
18            i++;
19        }
20
21        while(i < s.size() && s[i]>='0' && s[i]<='9'){
22            result = result * 10 + (s[i]-'0');
23
24            if(result * sign > INT_MAX){
25                return INT_MAX;
26            }
27            else if(result * sign < INT_MIN){
28                return INT_MIN;
29            }
30            i++;
31        }
32        return result * sign;
33    }
34};