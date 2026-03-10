// Last updated: 3/10/2026, 11:49:05 AM
1/**
2 * @param {number[]} nums
3 * @return {number[]}
4 */
5var applyOperations = function(nums) {
6    for(let i=0;i<nums.length;i++){
7        if(nums[i]==nums[i+1]){
8            nums[i]=nums[i]*2;
9            nums[i+1]=0;
10        }
11    }
12
13    let j=0;
14
15    for(let i=0;i<nums.length;i++){
16        if(nums[i]!==0){
17            [nums[j],nums[i]] = [nums[i],nums[j]];
18            j++;
19        }
20    }
21    return nums;
22};