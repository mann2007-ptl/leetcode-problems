// Last updated: 5/20/2026, 10:14:13 AM
1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        int sum = 0;
5
6        for(int i=1;i<num;i++){
7            if(num%i==0){
8                sum+=i;
9            }
10        }
11
12        return sum == num;
13    }
14};