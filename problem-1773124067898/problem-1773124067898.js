// Last updated: 3/10/2026, 11:57:47 AM
1/**
2 * @param {number[]} nums
3 * @param {number} pivot
4 * @return {number[]}
5 */
6var pivotArray = function(nums, pivot) {
7    let big = [];
8    let small = [];
9    let equal = [];
10
11    for(let i=0;i<nums.length;i++){
12        if(nums[i]==pivot){
13            equal.push(nums[i]);
14        }
15        else if(nums[i]<pivot){
16            small.push(nums[i]);
17        }
18        else{
19            big.push(nums[i]);
20        }
21    }
22    return [...small , ...equal , ...big];
23};