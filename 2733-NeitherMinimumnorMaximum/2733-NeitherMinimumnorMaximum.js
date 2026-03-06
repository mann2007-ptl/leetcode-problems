// Last updated: 3/6/2026, 2:44:27 PM
1/**
2 * @param {number[]} nums
3 * @return {number}
4 */
5var findNonMinOrMax = function(nums) {
6    if(nums.length<=2){
7        return -1;
8    }
9    nums = nums.sort((a,b)=>a-b);
10    return nums[1];
11};