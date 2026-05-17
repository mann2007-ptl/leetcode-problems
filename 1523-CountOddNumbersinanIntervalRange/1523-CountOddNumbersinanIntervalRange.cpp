// Last updated: 5/17/2026, 9:09:08 AM
1class Solution {
2public:
3    int countOdds(int low, int high) {
4        int count = 0;
5
6        for(int i=low;i<=high;i++){
7            if(i%2!=0){
8                count++;
9            }
10        }
11        return count;
12    }
13};