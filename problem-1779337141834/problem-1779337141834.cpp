// Last updated: 5/21/2026, 9:49:01 AM
1class Solution {
2public:
3    bool sumOfNumberAndReverse(int num) {
4        for(int i=0;i<=num;i++){
5            int n = i;
6            int rev = 0;
7
8            while(n){
9                rev = rev*10 + n % 10;
10                n=n/10;
11            }
12
13            if(i+rev == num){
14                return true;
15            }
16        }
17        return false;
18    }
19};