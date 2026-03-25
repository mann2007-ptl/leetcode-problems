// Last updated: 3/25/2026, 11:23:37 AM
1class Solution {
2public:
3    bool canBeEqual(vector<int>& target, vector<int>& arr) {
4        sort(target.begin(),target.end());
5        sort(arr.begin(),arr.end());
6
7        return target == arr;
8    }
9};