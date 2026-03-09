// Last updated: 3/9/2026, 5:10:54 PM
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        long long i = 1;
5        long long j = num;
6
7        while(i <= j){
8            long long mid = i + (j - i) / 2;
9            long long square = mid * mid;
10
11            if(square == num){
12                return true;
13            }
14            else if(square < num){
15                i = mid + 1;
16            }
17            else{
18                j = mid - 1;
19            }
20        }
21        return false;
22    }
23};