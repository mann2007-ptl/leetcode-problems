// Last updated: 3/10/2026, 11:37:05 AM
1/**
2 * @param {number[]} nums1
3 * @param {number[]} nums2
4 * @return {number}
5 */
6var addedInteger = function(nums1, nums2) {
7    nums1 = nums1.sort((a,b)=>a-b);
8    nums2 = nums2.sort((a,b)=>a-b);
9
10    return nums2[0] - nums1[0]
11};