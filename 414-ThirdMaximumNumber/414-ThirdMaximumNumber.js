// Last updated: 7/17/2026, 4:27:15 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
    let firstMax = -Infinity;
    let secondMax = -Infinity;
    let thirdMax = -Infinity;

    for(let i=0;i<nums.length;i++){
        if(nums[i]>firstMax){
            firstMax = nums[i];
        }
    }

    for(let i=0;i<nums.length;i++){
        if(nums[i]<firstMax && nums[i]>secondMax){
            secondMax = nums[i];
        }
    }

    for(let i=0;i<nums.length;i++){
        if(nums[i]<secondMax && nums[i]>thirdMax){
            thirdMax = nums[i];
        }
    }

    if(thirdMax === -Infinity){
        return firstMax;
    }

    return thirdMax;
};