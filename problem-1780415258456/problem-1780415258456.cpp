// Last updated: 6/2/2026, 9:17:38 PM
1class Solution {
2public:
3    vector<int> countBits(int n) {
4        vector<int> ans(n+1);
5        ans[0]=0;
6
7        for(int i=1;i<=n;i++){
8   ans[i] = ans[i / 2] + (i % 2);
9        }
10        return ans;
11    }
12};