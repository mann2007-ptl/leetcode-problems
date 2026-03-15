// Last updated: 3/15/2026, 8:26:53 PM
1/**
2 * @param {number[]} nums
3 * @param {number} target
4 * @return {number}
5 */
6var search = function(nums, target) {
7    for(let i=0;i<nums.length;i++){
8        if(nums[i]===target){
9            return i;
10        }
11    }
12    return -1;
13};