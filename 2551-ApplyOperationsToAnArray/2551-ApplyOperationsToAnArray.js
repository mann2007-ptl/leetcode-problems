// Last updated: 7/17/2026, 4:24:35 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var applyOperations = function(nums) {
    for(let i=0;i<nums.length;i++){
        if(nums[i]==nums[i+1]){
            nums[i]=nums[i]*2;
            nums[i+1]=0;
        }
    }

    let j=0;

    for(let i=0;i<nums.length;i++){
        if(nums[i]!==0){
            [nums[j],nums[i]] = [nums[i],nums[j]];
            j++;
        }
    }
    return nums;
};