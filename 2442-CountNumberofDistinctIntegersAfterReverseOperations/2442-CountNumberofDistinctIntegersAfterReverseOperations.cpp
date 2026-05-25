// Last updated: 5/25/2026, 9:42:35 AM
1class Solution {
2public:
3    int countDistinctIntegers(vector<int>& nums) {
4       set<int> s;
5
6       for(int x : nums){
7        s.insert(x);
8
9        int rev = 0;
10        int n = x;
11
12        while(n>0){
13            rev = rev * 10 + (n%10);
14            n=n/10;
15        }
16        s.insert(rev);
17       }
18       return s.size();
19    }
20};