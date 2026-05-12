// Last updated: 5/12/2026, 9:31:46 AM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        int sum = 0;
5
6        for(int x : nums){
7            sum+=x;
8        }
9        return sum % k;
10    }
11};