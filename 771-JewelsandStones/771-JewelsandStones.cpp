// Last updated: 5/14/2026, 9:46:44 AM
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        int count = 0;
5
6        for(char s : stones){
7            for(char j : jewels){
8                if(s==j){
9                    count++;
10                    break;
11                }
12            }
13        }
14        return count;
15    }
16};