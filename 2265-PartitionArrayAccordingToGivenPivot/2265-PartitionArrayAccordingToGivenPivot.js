// Last updated: 7/17/2026, 4:25:32 PM
/**
 * @param {number[]} nums
 * @param {number} pivot
 * @return {number[]}
 */
var pivotArray = function(nums, pivot) {
    let big = [];
    let small = [];
    let equal = [];

    for(let i=0;i<nums.length;i++){
        if(nums[i]==pivot){
            equal.push(nums[i]);
        }
        else if(nums[i]<pivot){
            small.push(nums[i]);
        }
        else{
            big.push(nums[i]);
        }
    }
    return [...small , ...equal , ...big];
};