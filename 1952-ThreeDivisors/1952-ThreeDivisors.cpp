// Last updated: 3/30/2026, 2:14:24 PM
1class Solution {
2public:
3    bool isThree(int n) {
4        int count = 0;
5        for(int i=1;i<=n;i++){
6            if(n%i==0){
7                count++;
8            }
9        }
10        if(count==3){
11            return true;
12        }
13        return false;
14    }
15};