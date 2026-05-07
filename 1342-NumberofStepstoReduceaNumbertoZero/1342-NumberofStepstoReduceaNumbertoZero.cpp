// Last updated: 5/7/2026, 8:25:54 AM
1class Solution {
2public:
3    int numberOfSteps(int num) {
4        int step = 0;
5
6        while(num > 0){
7            if(num%2==0){
8                num=num/2;
9                step++;
10            }
11            else{
12                num=num-1;
13                step++;
14            }
15        }
16        return step;
17    }
18};