// Last updated: 3/17/2026, 10:48:51 AM
1/**
2 * @param {number[]} nums
3 * @return {number[]}
4 */
5var numberGame = function(nums) {
6    nums.sort((a,b)=>a-b);
7
8    for(let i=0;i<nums.length;i+=2){
9        let temp = nums[i];
10        nums[i] = nums[i+1];
11        nums[i+1] = temp;
12    }
13    return nums;
14};