// Last updated: 3/6/2026, 2:08:03 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var alternatingSum = function(nums) {
    let sum = 0;
    for(let i=0;i<nums.length;i++){
        if(i%2===0){
            sum = sum + nums[i]
        }
        else{
            sum = sum - nums[i];
        }
    } 
    return sum;
};