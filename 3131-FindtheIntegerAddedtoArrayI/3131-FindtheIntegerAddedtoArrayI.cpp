// Last updated: 3/10/2026, 11:41:52 AM
1class Solution {
2public:
3    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
4          sort(nums1.begin(),nums1.end());
5          sort(nums2.begin(),nums2.end());
6          return nums2[0] - nums1[0];
7    }
8};